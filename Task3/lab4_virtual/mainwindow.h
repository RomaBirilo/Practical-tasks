#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
using namespace std;
class Figure
{
protected:
    double LENTH;
    double WIDTH;
public:
    Figure();
    Figure(double lenth, double width);
    virtual void Square()=0;
    virtual void Perimetr()=0;
    virtual void Show()=0;
 };
class Rectangle: public Figure
{
protected:
    double square;
    double perimetr;


public:
    static QString name;
    Rectangle();

    Rectangle(double lenth, double width);
    void Square()override;
    void Perimetr()override;
    void Show()override;
};

class Triangle: public Figure
{
protected:
    double square;
    double perimetr;

public:
    static QString name;
    Triangle();
    Triangle(double lenth, double width);
    void Square()override;
    void Perimetr()override;
    void Show()override;
};
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow, public Rectangle,public Triangle
{
    Q_OBJECT
private:

    bool Rec=false;
    bool Trian=false;
    int posX=280;
    int posY=240;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
protected:
    void paintEvent(QPaintEvent *) override;
private slots:
    void on_DrawRec_clicked();
    void on_DrawTrian_clicked();
    void on_update_clicked();
    void on_move_4_clicked();
};
#endif // MAINWINDOW_H
