#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QMessageBox>
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

void MainWindow::on_pushButton_5_clicked()
{
    QString inputname="InputList.txt";
    QFile filein(inputname);
    filein.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream cin(& filein);
    mylst.clear();
    while (!cin.atEnd())
    {
        QString line = cin.readLine();
        mylst.push_back(line.toInt());
        ui->textEditFirst->append(line);
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    if(ui->textEditFirst->toPlainText().isEmpty())
         QMessageBox::information(this,"Инфо","Введите набор чисел");
    else
    {

        for (int i = 0; i < mylst.GetSize(); i++)
        {
            if (mylst[i] % 2 == 1)
                mylst.insert(mylst[i] + 1, i+1);
        }

        for (int i = 0; i < mylst.GetSize(); i++)
        {
            ui->textEditFirst_2->append(QString::number(mylst[i]));
        }
    }
}



void MainWindow::on_pushButton_7_clicked()
{

    QString outputname="OutputList.txt";
    QFile fileout(outputname);
    fileout.open(QIODevice::WriteOnly| QIODevice:: Text);
    QTextStream cout(& fileout);

    cout << "New list:";
    for (int i = 0; i < mylst.GetSize(); i++)
    {
        cout << mylst[i] << ' ';
    }
     QMessageBox::information(this,"Инфо","Вы успешно записали данные в файл");


}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->stackedWidget->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->stackedWidget->show();
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->stackedWidget->show();
}


void MainWindow::on_pushButtonInputQueue_clicked()
{
    QString inputname="InputQueue.txt";
    QFile filein(inputname);
    filein.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream fin(& filein);
    Q.clear();
    while (!fin.atEnd())
    {
        QString line = fin.readLine();
        Q.push(line.toInt());
        ui->textEdiSecond->append(line);
        n++;
    }

    filein.close();
}


void MainWindow::on_pushButtonSecondSolve_clicked()
{
    if(ui->textEdiSecond->toPlainText().isEmpty() or ui->lineEditM->text().isEmpty() or ui->lineEditK->text().isEmpty() or ui->lineEditT->text().isEmpty() or ui->lineEditMC->text().isEmpty())
        QMessageBox::information(this,"Инфо","Введите все данные");

    else
    {
        m = ui->lineEditM->text().toInt();
        k = ui->lineEditK->text().toInt();
        t = ui->lineEditT->text().toInt();
        mc = ui->lineEditMC->text().toInt();

        if (mc == 0)
        {
            ui->textEditSecond_2->append("Ошибка: деление на 0 (mc == 0)");
            return;
        }

        for (int i = 0; i < m && !Q.empty(); i++)
        {
            Q.pop();
        }

        for (int i = 0; i < k; i++)
        {
            if (!Q.empty())
            {
                Q.push(Q.back() + 1);
            }
            else
            {
                Q.push(1);
            }
        }

        if (HeDoThis(n, m, k, t, mc))
        {
            ui->textEditSecond_2->append("Yes\n");
        }
        else
        {
            ui->textEditSecond_2->append("No\n");

            int p = t / mc;

            for (int i = 0; i < p && !Q.empty(); i++)
            {
                Q.pop();
            }

            n = n - m + k - t / mc;
            if (n < 0) n = 0;


        }

    }
}


void MainWindow::on_pushButtonSecongInfile_clicked()
{
    QString outputname="OutputQueue.txt";
    QFile fileout(outputname);
    fileout.open(QIODevice::WriteOnly| QIODevice:: Text);
    QTextStream fout(& fileout);
    fout<<ui->textEditSecond_2->toPlainText();
    QMessageBox::information(this,"Инфо","Вы успешно записали данные в файл");
    fileout.close();
}


void MainWindow::on_pushButtonThirdInput_clicked()
{
    QString inputname="InputStack.txt";
    QFile filein(inputname);
    filein.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream cin(& filein);
    s.clear();
    while (!cin.atEnd())
    {
        QString line = cin.readLine();
        ui->textEditThird->append(line);
        s.push(line.toInt());
    }
    filein.close();
}


void MainWindow::on_pushButtonThirdSolve_clicked()
{
    if(ui->textEditThird->toPlainText().isEmpty())
        QMessageBox::information(this,"Инфо","Введите стек");
    else
    {
        int prev, cur, next;
        int counter = 0;
        if (s.size() % 3 == 0)
        {
            while (!s.empty())
            {
                if (s.size() == 2)
                    break;
                prev = s.top();
                s.pop();
                cur=s.top();
                s.pop();
                next = s.top();
                if (prev == next)
                    counter++;
                s.push(cur);
            }
            ui->textEditThird_2->append("Количество элементов с равными соседями:"+ QString::number(counter));
        }
        else
        {
            ui->textEditThird_2->append("Размер стека не равен 0 mod(3)");
        }
    }

}


void MainWindow::on_pushButtonFourthInput_clicked()
{
    QString inputname = "InputStack2.txt";
    QFile filein(inputname);
    filein.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream cin(&filein);

    s.clear();
    while (!cin.atEnd())
    {
        QString line = cin.readLine();
        ui->textEditFourth->append(line);
        s.push(line.toInt());
    }
    filein.close();

}


void MainWindow::on_pushButtonFourthSolve_clicked()
{
    if(ui->textEditFourth->toPlainText().isEmpty())
        QMessageBox::information(this,"Инфо","Введите стек");
    else
    {
        int prev, cur, next;
        Stack<int> s2;

        while (!s.empty())
        {
            if (s.size() < 3)
            {
                ui->textEditFourth_2->append("Размер стека должен быть не меньше трех");
                break;
            }

            prev = s.top();
            s.pop();
            cur = s.top();
            s.pop();
            next = s.top();
            s.pop();
            s2.push(next);
            s2.push(cur);
            s2.push(prev);
        }
        int n = s2.size();
        for (int i = 0; i < n; i++)
        {
            ui->textEditFourth_2->append(QString::number(s2.top()));
            s2.pop();
        }
    }

}


void MainWindow::on_pushButtonFourth_clicked()
{

    QString outputname = "OutputStack.txt";
    QFile fileout(outputname);
    fileout.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream cout(&fileout);
    cout<<ui->textEditFourth_2->toPlainText();
    QMessageBox::information(this,"Инфо","Вы успешно записали данные в файл");
    fileout.close();


}

