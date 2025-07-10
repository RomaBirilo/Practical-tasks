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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEditNumSize;
    QTextEdit *textEditDigitRep;
    QTextEdit *textEditDay;
    QTextEdit *textEditSelfGen;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QSplitter *splitter;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditNumSize;
    QPushButton *pushButtonNumSize;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditDigtRep;
    QPushButton *pushButtonDigtiRep;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditDay;
    QPushButton *pushButtonDay;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QLineEdit *lineEditSelfGen;
    QPushButton *pushButtonSelfGen;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(990, 594);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEditNumSize = new QTextEdit(centralwidget);
        textEditNumSize->setObjectName("textEditNumSize");
        textEditNumSize->setGeometry(QRect(300, 40, 111, 221));
        textEditDigitRep = new QTextEdit(centralwidget);
        textEditDigitRep->setObjectName("textEditDigitRep");
        textEditDigitRep->setGeometry(QRect(770, 40, 104, 221));
        textEditDay = new QTextEdit(centralwidget);
        textEditDay->setObjectName("textEditDay");
        textEditDay->setGeometry(QRect(380, 340, 104, 191));
        textEditSelfGen = new QTextEdit(centralwidget);
        textEditSelfGen->setObjectName("textEditSelfGen");
        textEditSelfGen->setGeometry(QRect(860, 340, 104, 181));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(300, 10, 101, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(770, 10, 101, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(380, 310, 101, 20));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(860, 310, 101, 20));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(10, 10, 277, 253));
        splitter->setOrientation(Qt::Orientation::Vertical);
        label = new QLabel(splitter);
        label->setObjectName("label");
        splitter->addWidget(label);
        widget = new QWidget(splitter);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditNumSize = new QLineEdit(widget);
        lineEditNumSize->setObjectName("lineEditNumSize");

        verticalLayout->addWidget(lineEditNumSize);

        pushButtonNumSize = new QPushButton(widget);
        pushButtonNumSize->setObjectName("pushButtonNumSize");

        verticalLayout->addWidget(pushButtonNumSize);

        splitter->addWidget(widget);
        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(450, 10, 311, 251));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        lineEditDigtRep = new QLineEdit(widget1);
        lineEditDigtRep->setObjectName("lineEditDigtRep");

        verticalLayout_2->addWidget(lineEditDigtRep);


        verticalLayout_3->addLayout(verticalLayout_2);

        pushButtonDigtiRep = new QPushButton(widget1);
        pushButtonDigtiRep->setObjectName("pushButtonDigtiRep");

        verticalLayout_3->addWidget(pushButtonDigtiRep);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(10, 310, 359, 219));
        verticalLayout_5 = new QVBoxLayout(widget2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(widget2);
        label_4->setObjectName("label_4");

        verticalLayout_4->addWidget(label_4);

        lineEditDay = new QLineEdit(widget2);
        lineEditDay->setObjectName("lineEditDay");

        verticalLayout_4->addWidget(lineEditDay);


        verticalLayout_5->addLayout(verticalLayout_4);

        pushButtonDay = new QPushButton(widget2);
        pushButtonDay->setObjectName("pushButtonDay");

        verticalLayout_5->addWidget(pushButtonDay);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(540, 310, 314, 210));
        verticalLayout_7 = new QVBoxLayout(widget3);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_2 = new QLabel(widget3);
        label_2->setObjectName("label_2");

        verticalLayout_6->addWidget(label_2);

        lineEditSelfGen = new QLineEdit(widget3);
        lineEditSelfGen->setObjectName("lineEditSelfGen");

        verticalLayout_6->addWidget(lineEditSelfGen);


        verticalLayout_7->addLayout(verticalLayout_6);

        pushButtonSelfGen = new QPushButton(widget3);
        pushButtonSelfGen->setObjectName("pushButtonSelfGen");

        verticalLayout_7->addWidget(pushButtonSelfGen);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 990, 25));
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
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Result</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Result</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Result</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Result</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Number Size</span></p><p><span style=\" font-size:11pt;\">You need to enter number </span></p><p><span style=\" font-size:11pt;\">and then the program will calculate</span></p><p><span style=\" font-size:11pt;\">its size</span></p><p><br/></p></body></html>", nullptr));
        pushButtonNumSize->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Digit Repetitions</span></p><p><span style=\" font-size:12pt;\">You need to enter number</span></p><p><span style=\" font-size:12pt;\">and then the program will calculate</span></p><p><span style=\" font-size:12pt;\">count of digits in its number</span></p></body></html>", nullptr));
        pushButtonDigtiRep->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Day From Date</span></p><p><span style=\" font-size:12pt;\">You need to emter the date(dd.mm.yyyy)</span></p><p><span style=\" font-size:12pt;\">and then the program will tell you </span></p><p><span style=\" font-size:12pt;\">what number the day had</span></p></body></html>", nullptr));
        pushButtonDay->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Self Generated Numbers</span></p><p><span style=\" font-size:11pt;\">You need to enter the count members </span></p><p><span style=\" font-size:11pt;\">of subsequence and then the program </span></p><p><span style=\" font-size:11pt;\">will show this subsequence</span></p></body></html>", nullptr));
        pushButtonSelfGen->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
