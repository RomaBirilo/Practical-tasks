//Unit тест для проверки ui из задания 2(лаб 23 с использованием графики)
#include <QtTest>
#include "mainwindow.h"
#include <QLineEdit>
#include <QStackedWidget>
#include <QTextEdit>
class TestMyClass : public QObject {
    Q_OBJECT
private:
    MainWindow *win;
private slots:
    void initTestCase()
    {
        win=new MainWindow;
        win->show();
    }

    void cleanupTestCase()
    {
        delete win;
    }

    void TestPushButton_2()
    {
        QPushButton *button= win->findChild<QPushButton*>("pushButton_2");
        QVERIFY2(button,"Button2 not found");

        QStackedWidget *swidget = win->findChild<QStackedWidget*>("stackedWidget");
        QVERIFY2(swidget,"stackedWidget not found");

        QTest::mouseClick(button,Qt::LeftButton);

        QCOMPARE(swidget->currentIndex(),0);
    }

    void TestPushButton_3()
    {
        QPushButton *button= win->findChild<QPushButton*>("pushButton_3");
        QVERIFY2(button,"Button3 not found");

        QStackedWidget *swidget = win->findChild<QStackedWidget*>("stackedWidget");
        QVERIFY2(swidget,"stackedWidget not found");

        QTest::mouseClick(button,Qt::LeftButton);

        QCOMPARE(swidget->currentIndex(),1);
    }

    void TestTextEditForFirst()
    {
        QTextEdit * textEdit = win->findChild<QTextEdit*>("textEditForFirst");
        QVERIFY2(textEdit, "TextEditForFirst not found");

        QTest::keyClicks(textEdit,"Test text");

        QCOMPARE(textEdit->toPlainText(),"Test text");
    }

    void TestTextEditForFirst_2()
    {
        QTextEdit * textEdit = win->findChild<QTextEdit*>("textEditForFirst_2");
        QVERIFY2(textEdit, "TextEditForFirst_2 not found");

        QTest::keyClicks(textEdit,"Test text");

        QCOMPARE(textEdit->toPlainText(),"Test text");
    }

    void TestPusnButtonForFirst()
    {
        QPushButton *button= win->findChild<QPushButton*>("pushButtonForFirst");
        QVERIFY2(button,"ButtonForFirst not found");

        QSignalSpy spy(button,&QPushButton::clicked);
        QTest::mouseClick(button,Qt::LeftButton);

        QCOMPARE(spy.count(),1);
    }

    void TestPusnButtonForSecond()
    {
        QPushButton *button= win->findChild<QPushButton*>("pushButtonForSecond");
        QVERIFY2(button,"ButtonForSecond not found");

        QSignalSpy spy(button,&QPushButton::clicked);
        QTest::mouseClick(button,Qt::LeftButton);

        QCOMPARE(spy.count(),1);
    }

    void TestLineEdit()
    {
        QLineEdit *line = win->findChild<QLineEdit*>("lineEdit");
        QVERIFY2(line,"lineEdit no found");

        QTest::keyClicks(line,"Test text");

        QCOMPARE(line->text(),"Test text");
    }

};



QTEST_MAIN(TestMyClass)
#include "test_myclass.moc"
