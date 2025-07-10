#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "chisla.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonNumSize_clicked();

    void on_pushButtonDigtiRep_clicked();

    void on_pushButtonDay_clicked();

    void on_pushButtonSelfGen_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
