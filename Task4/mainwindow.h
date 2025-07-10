#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "MyList.h"
#include "MyQueue.h"
#include "MyStack.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    List <int> mylst;
    Queue<int> Q;
    Stack<int> s;
    int n;
    int m,k,t,mc;

    bool HeDoThis(int n, int m, int k, int t, int mc)
    {
        n = n - m;
        n = n + k;
        if (n*mc <=t)
            return true;
        else
            return false;
    }

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButtonInputQueue_clicked();

    void on_pushButtonSecondSolve_clicked();

    void on_pushButtonSecongInfile_clicked();

    void on_pushButtonThirdInput_clicked();

    void on_pushButtonThirdSolve_clicked();

    void on_pushButtonFourthInput_clicked();

    void on_pushButtonFourthSolve_clicked();

    void on_pushButtonFourth_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
