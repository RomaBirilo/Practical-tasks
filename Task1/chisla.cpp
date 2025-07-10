#include "chisla.h"
#include <QString>
Chisla::Chisla(int a)
{
    this->a=a;
    day=0;
    month=0;
    year=0;

}

Chisla::Chisla(int day, int month, int year)
{
    this->day=day;
    this->month=month;
    this->year=year;
    a=0;
}

int Chisla::NumSize()
{
    int num=a;
    int size=0;
    while(num!=0)
    {
        size++;
        num/=10;
    }
    return size;
}

void Chisla::RepetitionDigit(int arr[10])
{
    int num=a;
    int num2;
    for (int var = 0; var < NumSize(); var++)
    {
        num2=num%10;
        arr[num2]+=1;
        num/=10;
    }
}

QString Chisla::DayFromDate()
{
    QTextStream cout(stdout);
    int number;
    if (year ==1582 && month==10 && 4<day && day<14)
        return "Such a date does not exist in any calendar";
    else if(day>31)
        return "No such date exists";
    else if(month>12||month<1)
        return"No such date exists";
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day>=31)
        return "No such date exists";
    else if (year % 4 != 0 && month == 2 && day > 28)
        return "No such date exists";
    else if (year % 4 == 0 && month == 2 && day > 29)
        return "No such date exists";
    else if ((month == 1 || month == 3 || month == 5 || month == 7|| month==8|| month==10|| month==12) && day > 31)
        return "No such date exists";
    else if (year == 0 || month == 0 || day == 0)
        return "No such date exists";
    else if(year>=1582 && 1<=month && month<=12)
    {
        if (month == 1 || month == 2)
        {
            year = year - 1;
            month = month + 10;
        }
        else
            month = month - 2;

        number = day + ((31 * month) / 12) + year + (year / 4) - (year / 100) + (year / 400);
        number = number % 7;
        if (number == 0)
            return "Number of the day of the week in the Gregorian calendar:7";
        else
            return "Number of the day of the week in the Gregorian calendar:" + QString::number(number);
    }
    else
    {
        if (month == 1 || month == 2)
        {
            year = year - 1;
            month = month + 10;
        }
        else
            month = month - 2;

        number = day + ((31 * month) / 12) + year + (year / 4) + 5;
        number = number % 7;
        if (number == 0)
            return "Number of the day of the week in the Julian calendar:7";
        else
            return"Number of the day of the week in the Julian calendar:"+QString::number(number);
    }

}

void Chisla::SelfGeneratedNums(QVector <int> &vec)
{
    QTextStream cout(stdout);
    int count=a, sum, sum2, count_dif;
    if (count <= 5)
    {
        sum2 = 1;
        while (count > 0)
        {
            vec.push_back(sum2);
            sum2 = sum2 + 2;
            count--;
        }
    }
    else
    {
        vec.push_back(1);
        vec.push_back(3);
        vec.push_back(5);
        vec.push_back(7);
        vec.push_back(9);
        count_dif = count - 5;

        sum = 9;
        for (int k = 1; k <= count_dif; k++)
        {

            if (k % 10 == 0)
            {
                sum = sum + 2;
                vec.push_back(sum);
            }
            else
            {
                sum = sum + 11;
                vec.push_back(sum);
            }
        }

    }
}
