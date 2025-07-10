#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHBoxLayout>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    connect(pushbuttonDrawRec, &QPushButton::clicked, this, &MainWindow::on_pushbuttonDrawRec_clicked);
    connect(pushbuttonDrawTrian, &QPushButton::clicked, this, &MainWindow::on_pushbuttonDrawTrian_clicked);
    connect(pushbuttonMove, &QPushButton::clicked, this, &MainWindow::on_pushbuttonMove_clicked);
    connect(pushbuttonUpdate, &QPushButton::clicked, this, &MainWindow::on_pushbuttonUpdate_clicked);




    ui->setupUi(this);
    ui->tableWidget->setRowCount(4);
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels({"Размер фигуры","Переместить фигуру","Инфо о фигуре"});

    QWidget * cellWidget=new QWidget();
    QHBoxLayout *layout= new QHBoxLayout(cellWidget);

    layout->addWidget(label);
    layout->addWidget(lineedit);

    ui->tableWidget->setCellWidget(0,0,cellWidget);



    QWidget * cellWidget2=new QWidget();
    QHBoxLayout *layout2= new QHBoxLayout(cellWidget2);

    layout2->addWidget(label2);
    layout2->addWidget(lineedit2);

    ui->tableWidget->setCellWidget(1,0,cellWidget2);


    ui->tableWidget->setCellWidget(2,0,pushbuttonDrawRec);
    ui->tableWidget->setCellWidget(3,0,pushbuttonDrawTrian);

    QWidget * cellWidgetX=new QWidget();
    QHBoxLayout *layoutX= new QHBoxLayout(cellWidgetX);

    layoutX->addWidget(labelX);
    layoutX->addWidget(lineeditX);

    ui->tableWidget->setCellWidget(0,1,cellWidgetX);

    QWidget * cellWidgetY=new QWidget();
    QHBoxLayout *layoutY= new QHBoxLayout(cellWidgetY);

    layoutY->addWidget(labelY);
    layoutY->addWidget(lineeditY);

    ui->tableWidget->setCellWidget(1,1,cellWidgetY);

    ui->tableWidget->setCellWidget(2,1,pushbuttonMove);

    ui->tableWidget->setCellWidget(3,2,pushbuttonUpdate);


    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->resizeRowsToContents();
}

MainWindow::~MainWindow()
{
    delete ui;
}

Figure::Figure(double lenth, double width)
{
    LENTH=lenth;
    WIDTH=width;
}
Figure::Figure()
{
}
Rectangle::Rectangle(){}
Rectangle::Rectangle(double lenth, double width)
{
    LENTH=lenth;
    WIDTH=width;
}
void Rectangle::Square()
{
    square= LENTH*WIDTH;
}

void Rectangle::Perimetr()
{
    perimetr = 2*(LENTH+WIDTH);
}

void Rectangle::Show()
{
    Square();
    Perimetr();
}
QString Rectangle ::  name="Rectangle";


Triangle::Triangle(){}
Triangle::Triangle(double lenth, double width)
{
    LENTH=lenth;
    WIDTH=width;
}
void Triangle::Square()
{
    square= (LENTH*WIDTH)/2;
}

void Triangle::Perimetr()
{
    perimetr = qSqrt(qPow(LENTH/2,2)+qPow(WIDTH,2))*2+LENTH;
}

void Triangle::Show()
{
    Square();
    Perimetr();
}

QString Triangle ::  name="Triangle";

void MainWindow::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    // QRect clipRect(300, 300, 100, 100);
    // painter.setClipRect(clipRect);
    if(Rec)
        painter.drawRect(posX,posY,Rectangle::LENTH, Rectangle::WIDTH);
    else if(Trian)
    {
        QPolygon triangle;
        triangle << QPoint(posX, posY) << QPoint(posX-Triangle::LENTH/2,posY+Triangle::WIDTH)  << QPoint(posX+Triangle::LENTH/2,posY+Triangle::WIDTH);
        painter.drawPolygon(triangle);
    }
    painter.end();
}


void MainWindow::on_pushbuttonDrawRec_clicked()
{
    if(lineedit->text().isEmpty())
        QMessageBox::information(this,"Инфо","Введите длину и ширину");
    else
    {
        Rec=true;
        Trian=false;
        QString lenth = lineedit->text();
        QString width = lineedit2->text();
        Rectangle::LENTH=lenth.toDouble();
        Rectangle::WIDTH = width.toDouble();
        update();
    }

}

void MainWindow::on_pushbuttonDrawTrian_clicked()
{
    if(lineedit->text().isEmpty())
        QMessageBox::information(this,"Инфо","Введите основание и высоту");
    else
    {
        Trian=true;
        Rec=false;
        QString lenth = lineedit->text();
        QString width = lineedit2->text();
        Triangle::LENTH=lenth.toDouble();
        Triangle::WIDTH = width.toDouble();
        update();
    }

}

void MainWindow::on_pushbuttonMove_clicked()
{
    if(lineeditX->text().isEmpty() or lineeditY->text().isEmpty())
        QMessageBox::information(this,"Инфо","Введите координаты");
    else
    {
        QString X=lineeditX->text();
        QString Y=lineeditY->text();
        posX=X.toInt();
        posY=Y.toInt();
        update();
    }
}

void MainWindow::on_pushbuttonUpdate_clicked()
{
    if(Rec)
    {
        Rectangle::Show();
        QString str = QString::number(Rectangle::square);
        QString str2 = QString::number(Rectangle::perimetr);
        ui->tableWidget->setItem(0,2,new QTableWidgetItem("Название:"+Rectangle::name));
        ui->tableWidget->setItem(1,2,new QTableWidgetItem("Площадь:"+str));
        ui->tableWidget->setItem(2,2,new QTableWidgetItem("Периметр:"+str2));
        ui->tableWidget->resizeColumnsToContents();
        ui->tableWidget->resizeRowsToContents();

    }
    else if(Trian)
    {
        Triangle::Show();
        QString str = QString::number(Triangle::square);
        QString str2 = QString::number(Triangle::perimetr);
        ui->tableWidget->setItem(0,2,new QTableWidgetItem("Название:"+Triangle::name));
        ui->tableWidget->setItem(1,2,new QTableWidgetItem("Площадь:"+str));
        ui->tableWidget->setItem(2,2,new QTableWidgetItem("Периметр:"+str2));
        ui->tableWidget->resizeColumnsToContents();
        ui->tableWidget->resizeRowsToContents();
    }
}

