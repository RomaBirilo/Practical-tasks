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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton_6;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QTextEdit *textEditFirst;
    QPushButton *pushButton_5;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QTextEdit *textEditFirst_2;
    QPushButton *pushButton_7;
    QWidget *page_2;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_17;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_12;
    QTextEdit *textEditSecond_2;
    QPushButton *pushButtonSecongInfile;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_24;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_13;
    QTextEdit *textEdiSecond;
    QPushButton *pushButtonInputQueue;
    QSplitter *splitter_4;
    QSplitter *splitter_3;
    QSplitter *splitter;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_14;
    QLineEdit *lineEditM;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_22;
    QLabel *label_16;
    QLineEdit *lineEditT;
    QSplitter *splitter_2;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_21;
    QLabel *label_15;
    QLineEdit *lineEditK;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_23;
    QLabel *label_17;
    QLineEdit *lineEditMC;
    QPushButton *pushButtonSecondSolve;
    QWidget *page_7;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_25;
    QVBoxLayout *verticalLayout_26;
    QLabel *label_18;
    QTextEdit *textEditThird;
    QPushButton *pushButtonThirdInput;
    QPushButton *pushButtonThirdSolve;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_28;
    QLabel *label_19;
    QTextEdit *textEditThird_2;
    QWidget *page_8;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_32;
    QVBoxLayout *verticalLayout_33;
    QLabel *label_23;
    QTextEdit *textEditFourth;
    QPushButton *pushButtonFourthInput;
    QPushButton *pushButtonFourthSolve;
    QWidget *layoutWidget8;
    QVBoxLayout *verticalLayout_34;
    QVBoxLayout *verticalLayout_31;
    QLabel *label_22;
    QTextEdit *textEditFourth_2;
    QPushButton *pushButtonFourth;
    QWidget *layoutWidget9;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QPushButton *pushButton_4;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(961, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(20, 270, 931, 291));
        page = new QWidget();
        page->setObjectName("page");
        pushButton_6 = new QPushButton(page);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(360, 90, 211, 29));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(71, 21, 260, 171));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout_5->addWidget(label_6);

        textEditFirst = new QTextEdit(layoutWidget);
        textEditFirst->setObjectName("textEditFirst");
        textEditFirst->setReadOnly(true);

        verticalLayout_5->addWidget(textEditFirst);


        verticalLayout_6->addLayout(verticalLayout_5);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout_6->addWidget(pushButton_5);

        layoutWidget1 = new QWidget(page);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(590, 20, 260, 171));
        verticalLayout_8 = new QVBoxLayout(layoutWidget1);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName("label_7");

        verticalLayout_7->addWidget(label_7);

        textEditFirst_2 = new QTextEdit(layoutWidget1);
        textEditFirst_2->setObjectName("textEditFirst_2");
        textEditFirst_2->setReadOnly(true);

        verticalLayout_7->addWidget(textEditFirst_2);


        verticalLayout_8->addLayout(verticalLayout_7);

        pushButton_7 = new QPushButton(layoutWidget1);
        pushButton_7->setObjectName("pushButton_7");

        verticalLayout_8->addWidget(pushButton_7);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        layoutWidget_5 = new QWidget(page_2);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(10, 150, 261, 131));
        verticalLayout_17 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName("verticalLayout_18");
        label_12 = new QLabel(layoutWidget_5);
        label_12->setObjectName("label_12");

        verticalLayout_18->addWidget(label_12);

        textEditSecond_2 = new QTextEdit(layoutWidget_5);
        textEditSecond_2->setObjectName("textEditSecond_2");
        textEditSecond_2->setReadOnly(true);

        verticalLayout_18->addWidget(textEditSecond_2);


        verticalLayout_17->addLayout(verticalLayout_18);

        pushButtonSecongInfile = new QPushButton(layoutWidget_5);
        pushButtonSecongInfile->setObjectName("pushButtonSecongInfile");

        verticalLayout_17->addWidget(pushButtonSecongInfile);

        layoutWidget2 = new QWidget(page_2);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 10, 261, 131));
        verticalLayout_24 = new QVBoxLayout(layoutWidget2);
        verticalLayout_24->setObjectName("verticalLayout_24");
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName("verticalLayout_19");
        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName("label_13");

        verticalLayout_19->addWidget(label_13);

        textEdiSecond = new QTextEdit(layoutWidget2);
        textEdiSecond->setObjectName("textEdiSecond");
        textEdiSecond->setReadOnly(true);

        verticalLayout_19->addWidget(textEdiSecond);


        verticalLayout_24->addLayout(verticalLayout_19);

        pushButtonInputQueue = new QPushButton(layoutWidget2);
        pushButtonInputQueue->setObjectName("pushButtonInputQueue");

        verticalLayout_24->addWidget(pushButtonInputQueue);

        splitter_4 = new QSplitter(page_2);
        splitter_4->setObjectName("splitter_4");
        splitter_4->setGeometry(QRect(340, 70, 562, 143));
        splitter_4->setOrientation(Qt::Orientation::Vertical);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setOrientation(Qt::Orientation::Vertical);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        layoutWidget3 = new QWidget(splitter);
        layoutWidget3->setObjectName("layoutWidget3");
        verticalLayout_20 = new QVBoxLayout(layoutWidget3);
        verticalLayout_20->setObjectName("verticalLayout_20");
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget3);
        label_14->setObjectName("label_14");

        verticalLayout_20->addWidget(label_14);

        lineEditM = new QLineEdit(layoutWidget3);
        lineEditM->setObjectName("lineEditM");

        verticalLayout_20->addWidget(lineEditM);

        splitter->addWidget(layoutWidget3);
        layoutWidget4 = new QWidget(splitter);
        layoutWidget4->setObjectName("layoutWidget4");
        verticalLayout_22 = new QVBoxLayout(layoutWidget4);
        verticalLayout_22->setObjectName("verticalLayout_22");
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget4);
        label_16->setObjectName("label_16");

        verticalLayout_22->addWidget(label_16);

        lineEditT = new QLineEdit(layoutWidget4);
        lineEditT->setObjectName("lineEditT");

        verticalLayout_22->addWidget(lineEditT);

        splitter->addWidget(layoutWidget4);
        splitter_3->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Orientation::Horizontal);
        layoutWidget5 = new QWidget(splitter_2);
        layoutWidget5->setObjectName("layoutWidget5");
        verticalLayout_21 = new QVBoxLayout(layoutWidget5);
        verticalLayout_21->setObjectName("verticalLayout_21");
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget5);
        label_15->setObjectName("label_15");

        verticalLayout_21->addWidget(label_15);

        lineEditK = new QLineEdit(layoutWidget5);
        lineEditK->setObjectName("lineEditK");

        verticalLayout_21->addWidget(lineEditK);

        splitter_2->addWidget(layoutWidget5);
        layoutWidget6 = new QWidget(splitter_2);
        layoutWidget6->setObjectName("layoutWidget6");
        verticalLayout_23 = new QVBoxLayout(layoutWidget6);
        verticalLayout_23->setObjectName("verticalLayout_23");
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget6);
        label_17->setObjectName("label_17");

        verticalLayout_23->addWidget(label_17);

        lineEditMC = new QLineEdit(layoutWidget6);
        lineEditMC->setObjectName("lineEditMC");

        verticalLayout_23->addWidget(lineEditMC);

        splitter_2->addWidget(layoutWidget6);
        splitter_3->addWidget(splitter_2);
        splitter_4->addWidget(splitter_3);
        pushButtonSecondSolve = new QPushButton(splitter_4);
        pushButtonSecondSolve->setObjectName("pushButtonSecondSolve");
        splitter_4->addWidget(pushButtonSecondSolve);
        stackedWidget->addWidget(page_2);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        layoutWidget_6 = new QWidget(page_7);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(20, 50, 261, 152));
        verticalLayout_25 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_25->setObjectName("verticalLayout_25");
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName("verticalLayout_26");
        label_18 = new QLabel(layoutWidget_6);
        label_18->setObjectName("label_18");

        verticalLayout_26->addWidget(label_18);

        textEditThird = new QTextEdit(layoutWidget_6);
        textEditThird->setObjectName("textEditThird");
        textEditThird->setReadOnly(true);

        verticalLayout_26->addWidget(textEditThird);


        verticalLayout_25->addLayout(verticalLayout_26);

        pushButtonThirdInput = new QPushButton(layoutWidget_6);
        pushButtonThirdInput->setObjectName("pushButtonThirdInput");

        verticalLayout_25->addWidget(pushButtonThirdInput);

        pushButtonThirdSolve = new QPushButton(page_7);
        pushButtonThirdSolve->setObjectName("pushButtonThirdSolve");
        pushButtonThirdSolve->setGeometry(QRect(350, 110, 191, 29));
        layoutWidget7 = new QWidget(page_7);
        layoutWidget7->setObjectName("layoutWidget7");
        layoutWidget7->setGeometry(QRect(610, 60, 259, 114));
        verticalLayout_28 = new QVBoxLayout(layoutWidget7);
        verticalLayout_28->setObjectName("verticalLayout_28");
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget7);
        label_19->setObjectName("label_19");

        verticalLayout_28->addWidget(label_19);

        textEditThird_2 = new QTextEdit(layoutWidget7);
        textEditThird_2->setObjectName("textEditThird_2");
        textEditThird_2->setReadOnly(true);

        verticalLayout_28->addWidget(textEditThird_2);

        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        layoutWidget_8 = new QWidget(page_8);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(40, 70, 261, 152));
        verticalLayout_32 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_32->setObjectName("verticalLayout_32");
        verticalLayout_32->setContentsMargins(0, 0, 0, 0);
        verticalLayout_33 = new QVBoxLayout();
        verticalLayout_33->setObjectName("verticalLayout_33");
        label_23 = new QLabel(layoutWidget_8);
        label_23->setObjectName("label_23");

        verticalLayout_33->addWidget(label_23);

        textEditFourth = new QTextEdit(layoutWidget_8);
        textEditFourth->setObjectName("textEditFourth");
        textEditFourth->setReadOnly(true);

        verticalLayout_33->addWidget(textEditFourth);


        verticalLayout_32->addLayout(verticalLayout_33);

        pushButtonFourthInput = new QPushButton(layoutWidget_8);
        pushButtonFourthInput->setObjectName("pushButtonFourthInput");

        verticalLayout_32->addWidget(pushButtonFourthInput);

        pushButtonFourthSolve = new QPushButton(page_8);
        pushButtonFourthSolve->setObjectName("pushButtonFourthSolve");
        pushButtonFourthSolve->setGeometry(QRect(370, 130, 191, 29));
        layoutWidget8 = new QWidget(page_8);
        layoutWidget8->setObjectName("layoutWidget8");
        layoutWidget8->setGeometry(QRect(620, 70, 260, 161));
        verticalLayout_34 = new QVBoxLayout(layoutWidget8);
        verticalLayout_34->setObjectName("verticalLayout_34");
        verticalLayout_34->setContentsMargins(0, 0, 0, 0);
        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setObjectName("verticalLayout_31");
        label_22 = new QLabel(layoutWidget8);
        label_22->setObjectName("label_22");

        verticalLayout_31->addWidget(label_22);

        textEditFourth_2 = new QTextEdit(layoutWidget8);
        textEditFourth_2->setObjectName("textEditFourth_2");
        textEditFourth_2->setReadOnly(true);

        verticalLayout_31->addWidget(textEditFourth_2);


        verticalLayout_34->addLayout(verticalLayout_31);

        pushButtonFourth = new QPushButton(layoutWidget8);
        pushButtonFourth->setObjectName("pushButtonFourth");

        verticalLayout_34->addWidget(pushButtonFourth);

        stackedWidget->addWidget(page_8);
        layoutWidget9 = new QWidget(centralwidget);
        layoutWidget9->setObjectName("layoutWidget9");
        layoutWidget9->setGeometry(QRect(40, 20, 881, 242));
        verticalLayout_4 = new QVBoxLayout(layoutWidget9);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(layoutWidget9);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget9);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        pushButton = new QPushButton(layoutWidget9);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(layoutWidget9);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        pushButton_2 = new QPushButton(layoutWidget9);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(layoutWidget9);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        pushButton_3 = new QPushButton(layoutWidget9);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_3->addWidget(pushButton_3);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(layoutWidget9);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        pushButton_4 = new QPushButton(layoutWidget9);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout_4->addWidget(pushButton_4);


        verticalLayout_4->addLayout(horizontalLayout_4);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(730, 550, 221, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 961, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\321\210\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\261\320\276\321\200 \321\207\320\270\321\201\320\265\320\273 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\275\320\260\320\261\320\276\321\200 \321\207\320\270\321\201\320\265\320\273 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        pushButtonSecongInfile->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\265\321\200\320\265\320\264\321\214 \320\262\320\275\320\260\321\207\320\260\320\273\320\265", nullptr));
        pushButtonInputQueue->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\276\321\207\320\265\321\200\320\265\320\264\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\270, \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\276\320\261\321\201\320\273\321\203\320\266\320\270\320\273\320\270", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\321\201\321\201\320\260 \320\267\320\260\320\272\321\200\320\276\320\265\321\202\321\201\321\217 \321\207\320\265\321\200\320\265\320\267 (\320\262 \321\201\320\265\320\272\321\203\320\275\320\264\320\260\321\205)", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\270, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\262\321\201\321\202\320\260\320\273\320\270 \320\262 \320\276\321\207\320\265\321\200\320\265\320\264\321\214", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\275\320\260 \320\276\320\264\320\275\320\276\320\263\320\276 \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\321\217(\320\262 \321\201\320\265\320\272\321\203\320\275\320\264\320\260\321\205)", nullptr));
        pushButtonSecondSolve->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\321\210\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\265\320\272", nullptr));
        pushButtonThirdInput->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270 \321\201\321\202\320\265\320\272 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        pushButtonThirdSolve->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\321\210\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\265\320\272", nullptr));
        pushButtonFourthInput->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270 \321\201\321\202\320\265\320\272 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        pushButtonFourthSolve->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\321\210\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        pushButtonFourth->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">\320\222\321\213\320\261\320\276\321\200 \320\267\320\260\320\264\320\260\321\207\320\270</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275 \320\275\320\260\320\261\320\276\321\200 \321\206\320\265\320\273\321\213\321\205 \321\207\320\270\321\201\320\265\320\273.\320\237\320\276\321\201\320\273\320\265 \320\272\320\260\320\266\320\264\320\276\320\263\320\276 \320\275\320\265\321\207\320\265\321\202\320\275\320\276\320\263\320\276 \320\262\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \321\207\320\265\321\202\320\275\321\213\320\271 \320\275\320\260 1 \320\261\320\276\320\273\321\214\321\210\320\265 \320\277\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\265\320\263\320\276", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\275\320\260\321\207\320\260\320\273\320\265 \320\262 \320\276\321\207\320\265\321\200\320\265\320\264\320\270 \320\261\321\213\320\273\320\276 n \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\265\320\271.\n"
"\320\232\320\260\321\201\321\201\320\270\321\200 \320\276\320\261\321\201\320\273\321\203\320\266\320\270\320\273 m \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\265\320\271, \320\277\320\276\321\201\320\273\320\265 \321\207\320\265\320\263\320\276 \320\265\321\211\320\265 k \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\265\320\271 \321\201\321\202\320\260\320\273\320\270 \320\262 \320\276\321\207\320\265\321\200\320\265\320\264\321\214, \320\270 \320\272\320\260\321\201\321\201\320\270\321\200 \320\276\320\261\321\212\321\217\320\262\320\270\320\273,\n"
"\321\207\321\202\320\276 \321\207\320\265\321\200\320\265\320\267 t \320\274\320\270\320\275 \320\272\320\260\321\201\321\201\320\260 \320\267\320\260"
                        "\320\272\321\200\321\213\320\262\320\260\320\265\321\202\321\201\321\217 \320\275\320\260 \320\276\320\261\320\265\320\264. \320\243\321\201\320\277\320\265\320\265\321\202 \320\273\320\270 \320\272\320\260\321\201\321\201\320\270\321\200 \320\276\320\261\321\201\320\273\321\203\320\266\320\270\321\202\321\214 \320\262\321\201\320\265\321\205 \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", " \320\237\320\276\320\264\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 \321\201\321\202\320\265\320\272\320\260, \321\203 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \321\200\320\260\320\262\320\275\321\213\320\265 \"\321\201\320\276\321\201\320\265\320\264\320\270\".", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\260\321\202\321\200\320\270\320\262\320\260\321\217  \321\215\320\273\320\265\320\274\320\265\320\275\321\202\321\213  \321\201\321\202\320\265\320\272\320\260 \320\277\320\276 \321\202\321\200\320\276\320\271\320\272\320\260\320\274, \320\277\320\276\320\274\320\265\320\275\321\217\321\202\321\214 \320\272\321\200\320\260\320\271\320\275\320\270\320\265 \320\274\320\265\321\201\321\202\320\260\320\274\320\270", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\221\320\270\321\200\320\270\320\273\320\276 \320\240\320\276\320\274\320\260\320\275 5 \320\263\321\200\321\203\320\277\320\277\320\260,1 \320\272\321\203\321\200\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
