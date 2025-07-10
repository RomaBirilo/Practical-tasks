//Бирило Роман 5 группа 1 курс
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QtMath>
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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


void MainWindow::on_DrawRec_clicked()
{

    Rec=true;
    Trian=false;
    QString lenth = ui->Lenth->text();
    QString width = ui->Width->text();
    Rectangle::LENTH=lenth.toDouble();
    Rectangle::WIDTH = width.toDouble();
    update();
}


void MainWindow::on_DrawTrian_clicked()
{

    Trian=true;
    Rec=false;
    QString lenth = ui->Lenth->text();
    QString width = ui->Width->text();
    Triangle::LENTH=lenth.toDouble();
    Triangle::WIDTH = width.toDouble();
    update();
}



void MainWindow::on_update_clicked()
{
    if(Rec)
    {
        Rectangle::Show();
        QString str = QString::number(Rectangle::square);
        QString str2 = QString::number(Rectangle::perimetr);
        ui->square->setText(str);
        ui->perimetr->setText(str2);
        ui->name->setText(Rectangle::name);

    }
    else if(Trian)
    {
        Triangle::Show();
        QString str = QString::number(Triangle::square);
        QString str2 = QString::number(Triangle::perimetr);
        ui->square->setText(str);
        ui->perimetr->setText(str2);
        ui->name->setText(Triangle::name);
    }
}





void MainWindow::on_move_4_clicked()
{

    QString X=ui->positonX->text();
    QString Y=ui->positionY->text();
    posX=X.toInt();
    posY=Y.toInt();
    update();
}

