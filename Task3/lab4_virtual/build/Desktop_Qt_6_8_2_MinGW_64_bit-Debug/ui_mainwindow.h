/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_8;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *Width;
    QPushButton *DrawTrian;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *Lenth;
    QPushButton *DrawRec;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *name;
    QLabel *square;
    QLabel *perimetr;
    QPushButton *update;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *move;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *positonX;
    QLineEdit *positionY;
    QPushButton *move_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 0, 781, 181));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(17, 41, 261, 20));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 70, 284, 95));
        gridLayout_5 = new QGridLayout(layoutWidget);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        Width = new QLineEdit(layoutWidget);
        Width->setObjectName("Width");

        verticalLayout_2->addWidget(Width);

        DrawTrian = new QPushButton(layoutWidget);
        DrawTrian->setObjectName("DrawTrian");

        verticalLayout_2->addWidget(DrawTrian);


        gridLayout_5->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        Lenth = new QLineEdit(layoutWidget);
        Lenth->setObjectName("Lenth");

        verticalLayout->addWidget(Lenth);

        DrawRec = new QPushButton(layoutWidget);
        DrawRec->setObjectName("DrawRec");

        verticalLayout->addWidget(DrawRec);


        gridLayout_5->addLayout(verticalLayout, 0, 0, 1, 1);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(580, 50, 181, 116));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");

        verticalLayout_3->addWidget(label);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        name = new QLabel(layoutWidget_2);
        name->setObjectName("name");

        verticalLayout_4->addWidget(name);

        square = new QLabel(layoutWidget_2);
        square->setObjectName("square");

        verticalLayout_4->addWidget(square);

        perimetr = new QLabel(layoutWidget_2);
        perimetr->setObjectName("perimetr");

        verticalLayout_4->addWidget(perimetr);


        horizontalLayout->addLayout(verticalLayout_4);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        update = new QPushButton(layoutWidget_2);
        update->setObjectName("update");

        gridLayout_3->addWidget(update, 1, 0, 1, 1);

        layoutWidget_3 = new QWidget(groupBox);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(310, 40, 261, 124));
        gridLayout_4 = new QGridLayout(layoutWidget_3);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        move = new QLabel(layoutWidget_3);
        move->setObjectName("move");

        gridLayout->addWidget(move, 0, 0, 1, 2);

        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        positonX = new QLineEdit(layoutWidget_3);
        positonX->setObjectName("positonX");

        gridLayout_2->addWidget(positonX, 1, 0, 1, 1);

        positionY = new QLineEdit(layoutWidget_3);
        positionY->setObjectName("positionY");

        gridLayout_2->addWidget(positionY, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

        move_4 = new QPushButton(layoutWidget_3);
        move_4->setObjectName("move_4");

        gridLayout_4->addWidget(move_4, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "           Input size of your figure:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Width(height)", nullptr));
        DrawTrian->setText(QCoreApplication::translate("MainWindow", "Draw Triangle", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Lenth(base)", nullptr));
        DrawRec->setText(QCoreApplication::translate("MainWindow", "Draw Rectangle", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Square:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Perimetr:", nullptr));
        name->setText(QString());
        square->setText(QString());
        perimetr->setText(QString());
        update->setText(QCoreApplication::translate("MainWindow", "Update info", nullptr));
        move->setText(QCoreApplication::translate("MainWindow", "                           Move figure", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Position X", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Position Y", nullptr));
        move_4->setText(QCoreApplication::translate("MainWindow", "Move", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
