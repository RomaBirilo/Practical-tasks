#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QList>
#include <QVector>
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

void MainWindow::on_pushButtonNumSize_clicked()
{
    QString astr=ui->lineEditNumSize->text();
    Chisla a(astr.toInt());
    ui->textEditNumSize->setText(QString::number(a.NumSize()));
}


void MainWindow::on_pushButtonDigtiRep_clicked()
{
    QString astr=ui->lineEditDigtRep->text();
    Chisla a(astr.toInt());
    int arr[10]{};
    a.RepetitionDigit(arr);
    for (int var = 0; var < 10; ++var)
    {
        ui->textEditDigitRep->append(QString::number(var)+":"+QString::number(arr[var]));
    }

}


void MainWindow::on_pushButtonDay_clicked()
{
    QString astr=ui->lineEditDay->text();
    QStringList aList=astr.split('.',Qt::SkipEmptyParts);
    if (aList.size() == 3)
    {
        Chisla a(aList[0].toInt(), aList[1].toInt(), aList[2].toInt());
        ui->textEditDay->setText(a.DayFromDate());
    }
    else
    {
        ui->textEditDay->setText("Invalid date format");
    }
}


void MainWindow::on_pushButtonSelfGen_clicked()
{
    QString astr=ui->lineEditSelfGen->text();
    Chisla a(astr.toInt());
    QVector <int> vec;
    a.SelfGeneratedNums(vec);
    for (int var = 0; var < vec.size(); ++var)
    {
        ui->textEditSelfGen->append(QString::number(vec[var])+' ');
    }

}

