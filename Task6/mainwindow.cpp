#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QVBoxLayout>
#include <QPushButton>

#include <QWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), currentPenColor(Qt::black),currentBrushColor(Qt::black)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    view = new DrawFigure(scene,this);
    view->setDragMode(QGraphicsView::RubberBandDrag);  // позволяет выделение рамкой
    view->setInteractive(true);
    view->setRenderHint(QPainter::Antialiasing);

    PenColorButton = new QPushButton("Выбрать цвет контура");
    connect(PenColorButton, &QPushButton::clicked, this, &MainWindow::changePenColor);

    BrushColorButton = new QPushButton("Выбрать цвет заливки");
    connect(BrushColorButton, &QPushButton::clicked, this, &MainWindow::changeBrushColor);

    SaveButton = new QPushButton("Сохранить фигуры");
    connect(SaveButton,&QPushButton::clicked,this,&MainWindow::saveFigures);

    LoadButton = new QPushButton("Загрузить фигуры");
    connect(LoadButton,&QPushButton::clicked,this,&MainWindow::loadFigures);

    SelectFigure = new QComboBox();
    SelectFigure->addItem("Линия");
    SelectFigure->addItem("Прямоугольник");
    SelectFigure->addItem("Эллипс");
    connect(SelectFigure,&QComboBox::currentTextChanged,this,&MainWindow::sendShapeType);

    QWidget *centralWidget = new QWidget();
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    layout->addWidget(view);
    layout->addWidget(SelectFigure);
    layout->addWidget(PenColorButton);
    layout->addWidget(BrushColorButton);
    layout->addWidget(SaveButton);
    layout->addWidget(LoadButton);

    setCentralWidget(centralWidget);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changePenColor()
{
    QColor color = QColorDialog::getColor(currentPenColor, this, "Выбор цвета");

    if(color.isValid())
    {
        currentPenColor=color;
        view->setPenColor(currentPenColor);
    }
}

void MainWindow::changeBrushColor()
{
    QColor color = QColorDialog::getColor(currentBrushColor, this, "Выбор цвета");

    if(color.isValid())
    {
        currentBrushColor=color;
        view->setBrushColor(currentBrushColor);
    }
}

void MainWindow::sendShapeType()
{
    if(SelectFigure->currentText()=="Линия")
        view->setShapeType(DrawFigure::Line);
    if(SelectFigure->currentText()=="Прямоугольник")
        view->setShapeType(DrawFigure::Rectangle);
    if(SelectFigure->currentText()=="Эллипс")
        view->setShapeType(DrawFigure::Ellipse);
}

void MainWindow::saveFigures()
{
    QJsonArray figuresArray;

    for(QGraphicsItem *item : scene->items())
    {
        QJsonObject figureObject;
        if(auto Line= qgraphicsitem_cast<QGraphicsLineItem*>(item))
        {
            figureObject["type"]="Line";
            figureObject["x1"] = Line->line().x1();
            figureObject["x2"] = Line->line().x2();
            figureObject["y1"] = Line->line().y1();
            figureObject["y2"] = Line->line().y2();
            figureObject["Pen color"] = Line->pen().color().name();
        }
        else if(auto Rect= qgraphicsitem_cast<QGraphicsRectItem*>(item))
        {
            figureObject["type"]="Rectangle";
            figureObject["x"]=Rect->rect().x();
            figureObject["y"]=Rect->rect().y();
            figureObject["width"]=Rect->rect().width();
            figureObject["height"]=Rect->rect().height();
            figureObject["Pen color"]=Rect->pen().color().name();
            figureObject["Brush color"]=Rect->brush().color().name();
        }
        else if (auto Ellipse = qgraphicsitem_cast<QGraphicsEllipseItem*>(item))
        {
            figureObject["type"] = "Ellipse";
            figureObject["x"] = Ellipse->rect().x();
            figureObject["y"] = Ellipse->rect().y();
            figureObject["width"] = Ellipse->rect().width();
            figureObject["height"] = Ellipse->rect().height();
            figureObject["Pen color"] = Ellipse->pen().color().name();
            figureObject["Brush color"] = Ellipse->brush().color().name();
        }

        figuresArray.append(figureObject);
    }
    QJsonDocument doc(figuresArray);
    QFile fileout("save_figures.json");
    if (fileout.open(QIODevice::WriteOnly))
    {
        fileout.write(doc.toJson(QJsonDocument::Indented));
        fileout.close();
    }

}

void MainWindow::loadFigures()
{
    QFile filein("save_figures.json");
    if (!filein.open(QIODevice::ReadOnly))
    {
        qDebug() << "Не удалось открыть файл!";
        return;
    }
    QByteArray jsonData = filein.readAll();
    filein.close();

    QJsonDocument doc = QJsonDocument::fromJson(jsonData);
    if (!doc.isArray())
    {
        qDebug() << "Неверный формат файла!";
        return;
    }

    QJsonArray figuresArray = doc.array();

    for(const QJsonValue &val : figuresArray)
    {
        if (!val.isObject())
            continue;
        QJsonObject figureObject = val.toObject();

        if(figureObject["type"].toString()=="Line")
        {
            scene->addLine(QLineF(figureObject["x1"].toDouble(),figureObject["y1"].toDouble(),
            figureObject["x2"].toDouble(),figureObject["y2"].toDouble()), QPen(QColor(figureObject["Pen color"].toString()),2));
        }
        else if (figureObject["type"].toString()=="Rectangle")
        {
            scene->addRect(QRectF(figureObject["x"].toDouble(),figureObject["y"].toDouble(),
            figureObject["width"].toDouble(),figureObject["height"].toDouble() ),QPen(QColor(figureObject["Pen color"].toString()),2),
            QBrush(QColor(figureObject["Brush color"].toString())));
        }
        else if(figureObject["type"].toString()=="Ellipse")
        {
            scene->addEllipse(QRectF(figureObject["x"].toDouble(),figureObject["y"].toDouble(),
            figureObject["width"].toDouble(),figureObject["height"].toDouble() ),QPen(QColor(figureObject["Pen color"].toString()),2),
            QBrush(QColor(figureObject["Brush color"].toString())));
        }
    }

}

