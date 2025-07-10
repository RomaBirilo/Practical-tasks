#ifndef CHISLA_H
#define CHISLA_H
#include <QTextStream>
#include <QString>
#include <QVector>
class Chisla
{
    int a;
    int day;
    int month;
    int year;
public:
    Chisla (int a);
    Chisla(int day, int month, int year);
    int NumSize();
    void RepetitionDigit(int arr[10]);
    QString  DayFromDate();
    void SelfGeneratedNums(QVector <int>& vec);
};


#endif // CHISLA_H
