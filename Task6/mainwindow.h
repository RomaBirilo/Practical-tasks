#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "drawfigure.h"
#include <QMainWindow>
#include <QGraphicsScene>
#include <QColorDialog>
#include <QComboBox>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QFile>
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

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    DrawFigure *view;
    QComboBox *SelectFigure;
    QPushButton *PenColorButton;
    QPushButton *BrushColorButton;
    QPushButton *SaveButton;
    QPushButton *LoadButton;
    QColor currentPenColor;
    QColor currentBrushColor;
private slots:

    void changePenColor();
    void changeBrushColor();
    void sendShapeType();
    void saveFigures();
    void loadFigures();
};
#endif // MAINWINDOW_H
