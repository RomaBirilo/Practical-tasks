//Бирило Роман 5 группа 1 курс
//1.Задан текстовый файл Input.txt, состоящий  из слов.
//Разделителями между словами являются некоторое множество знаков препинания.
//Из каждой строки удалить слова, длина которых больше длины последнего слова этой строки и записать эти строки
//в новый файл Output.txt. Упорядочить слова  в полученных  строках по  возрастанию длин,
//результат сортировки записать в файл Out_sort.txt.
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCoreApplication>
#include <QString>
#include <QList>
#include <QTextStream>
#include <QFile>
#include <QRegularExpression>
#include <QVector>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButtonForFirst_clicked()
{
    QString lastword;
    QString res="";
    QVector<QString> line;
    QRegularExpression r(R"(\b\w+(?=[\s\W]*$))");
    QRegularExpression re(R"(\b\w+\b)");
    QRegularExpressionMatch m;
    QRegularExpressionMatch me;


    QString text=ui->textEditForFirst->toPlainText();
    QStringList strings=text.split('\n',Qt::SkipEmptyParts);
    for (int var = 0; var < strings.size(); ++var)
    {
        m = r.match(strings[var]);
        lastword=m.captured(0);
        QRegularExpressionMatchIterator it = re.globalMatch(strings[var]);
        while (it.hasNext())
        {
            me = it.next();
            line.push_back(me.captured(0));
        }


        for (int var = 0; var < line.size(); var++)
        {
            if(line[var].size()<=lastword.size())
            {
                res+=line[var]+" ";
            }
        }
        ui->textEditForFirst_2->append(res);
        res.clear();
        line.clear();
    }


}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->stackedWidget->show();
}


void MainWindow::on_pushButtonForSecond_clicked()
{

    QString str=ui->lineEdit->text();
    QRegularExpression r("^\\{?[a-fA-F0-9]{8}-[a-fA-F0-9]{4}-[a-fA-F0-9]{4}-[a-fA-F0-9]{4}-[a-fA-F0-9]{12}\\}?$");
    if (r.match(str).hasMatch())
        ui->labeResult->setText("The line is correct");
    else
        ui->labeResult->setText("The line is incorrect") ;
}




