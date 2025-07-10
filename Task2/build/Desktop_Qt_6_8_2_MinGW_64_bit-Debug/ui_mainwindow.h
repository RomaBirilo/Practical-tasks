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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEditForFirst;
    QPushButton *pushButtonForFirst;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QTextEdit *textEditForFirst_2;
    QWidget *page_2;
    QLabel *labeResult;
    QLabel *label_7;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QPushButton *pushButtonForSecond;
    QLabel *label_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(50, 200, 601, 271));
        page = new QWidget();
        page->setObjectName("page");
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 311, 191));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        textEditForFirst = new QTextEdit(layoutWidget);
        textEditForFirst->setObjectName("textEditForFirst");

        verticalLayout->addWidget(textEditForFirst);


        verticalLayout_2->addLayout(verticalLayout);

        pushButtonForFirst = new QPushButton(layoutWidget);
        pushButtonForFirst->setObjectName("pushButtonForFirst");

        verticalLayout_2->addWidget(pushButtonForFirst);

        layoutWidget1 = new QWidget(page);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(330, 20, 258, 191));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);

        textEditForFirst_2 = new QTextEdit(layoutWidget1);
        textEditForFirst_2->setObjectName("textEditForFirst_2");

        verticalLayout_3->addWidget(textEditForFirst_2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        labeResult = new QLabel(page_2);
        labeResult->setObjectName("labeResult");
        labeResult->setGeometry(QRect(330, 70, 201, 20));
        label_7 = new QLabel(page_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(331, 41, 66, 20));
        layoutWidget2 = new QWidget(page_2);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 42, 261, 93));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName("label_6");

        verticalLayout_4->addWidget(label_6);

        lineEdit = new QLineEdit(layoutWidget2);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_4->addWidget(lineEdit);

        pushButtonForSecond = new QPushButton(layoutWidget2);
        pushButtonForSecond->setObjectName("pushButtonForSecond");

        verticalLayout_4->addWidget(pushButtonForSecond);

        stackedWidget->addWidget(page_2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(550, 500, 221, 20));
        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(20, 80, 675, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        pushButton_2 = new QPushButton(layoutWidget3);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(20, 120, 551, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        pushButton_3 = new QPushButton(layoutWidget4);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_2->addWidget(pushButton_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
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
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\202\320\265\320\272\321\201\321\202", nullptr));
        pushButtonForFirst->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        labeResult->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
        pushButtonForSecond->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\221\320\270\321\200\320\270\320\273\320\276 \320\240\320\276\320\274\320\260\320\275 5 \320\263\321\200\321\203\320\277\320\277\320\260,1 \320\272\321\203\321\200\321\201", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\262 \321\202\320\265\320\272\321\201\321\202\320\265 \321\202\320\276\320\273\321\214\320\272\320\276 \321\202\320\265 \321\201\320\273\320\276\320\262\320\260, \320\264\320\273\320\270\320\275\320\260 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\274\320\265\320\275\321\214\321\210\320\265 \320\264\320\273\320\270\320\275\321\213 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\263\320\276 \321\201\320\273\320\276\320\262\320\260", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\321\214  \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\273\320\270 \320\264\320\260\320\275\320\275\320\260\321\217 \321\201\321\202\321\200\320\276\321\207\320\272\320\260 GUID \321\201 \320\270\320\273\320\270 \320\261\320\265\320\267 \321\201\320\272\320\276\320\261\320\276\320\272.", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
