#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
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

class MainWindow : public QMainWindow,public Rectangle,public Triangle
{
    Q_OBJECT
    QLabel* label=new QLabel("Длина(основание)");
    QLineEdit *lineedit=new QLineEdit();

    QLabel* label2=new QLabel("Ширина(высота)");
    QLineEdit *lineedit2=new QLineEdit();

    QPushButton *pushbuttonDrawRec = new QPushButton("Нарисовать прям-к");
    QPushButton *pushbuttonDrawTrian = new QPushButton("Нарисовать треуг-к");


    QLabel* labelX=new QLabel("Координата по X");
    QLineEdit *lineeditX=new QLineEdit();

    QLabel* labelY=new QLabel("Координата по Y");
    QLineEdit *lineeditY=new QLineEdit();

    QPushButton *pushbuttonMove = new QPushButton("Переместить");
    QPushButton *pushbuttonUpdate = new QPushButton("Обновить инфо");

    bool Rec=false;
    bool Trian=false;
    int posX=280;
    int posY=240;


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void paintEvent(QPaintEvent *) override;
private slots:
    void on_pushbuttonDrawRec_clicked();
    void on_pushbuttonDrawTrian_clicked();
    void on_pushbuttonMove_clicked();
    void on_pushbuttonUpdate_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
