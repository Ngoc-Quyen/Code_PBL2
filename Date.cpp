#include "Date.h"

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}
Date::Date(const Date &d)
{
    Date(d.day, d.month, d.year);
}
Date::~Date() {}
void Date::setDay(int d)
{
    this->day = d;
}
int Date::getDay()
{
    return this->day;
}
void Date::setMonth(int m)
{
    this->month = m;
}
int Date::getMonth()
{
    return this->month;
}
void Date::setYear(int y)
{
    this->year = y;
}
int Date::getYear()
{
    return this->year;
}
istream &operator>>(istream &in, Date &d)
{
            cout << "Nhap lan luot ngay, thang, nam: ";
            in >> d.day >> d.month >> d.year;
    while (d.month < 1 || d.month > 12)
    {
        while (1)
        {
            try
            {
                cout << "Nhap thang sai roi\n";
                cout << "Nhap lai thang: ";
                in >> d.month;
                if (!in)
                    throw string("");
                else
                    break;
            }

            catch (...)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n\t\t\tNhap Sai! Vui Long Nhap Lai!\n";
                continue;
            }
        }
    }
    while (d.day > d.DayMonth())
    {
        while (1)
        {
            try
            {
                cout << "Nhap ngay sai roi\n";
                cout << "Nhap lai ngay: ";
                in >> d.day;
                if (!in)
                    throw string("");
                else
                    break;
            }

            catch (...)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n\t\t\tNhap Sai! Vui Long Nhap Lai!\n";
                continue;
            }
        }
    }
    while (d.year < 1000)
    {
        while (1)
        {
            try
            {
                cout << "Nhap nam khong phu hop\n";
                cout << "Nhap lai nam: ";
                in >> d.year;
                if (!in)
                    throw string("");
                else
                    break;
            }

            catch (...)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n\t\t\tNhap Sai! Vui Long Nhap Lai!\n";
                continue;
            }
        }
    }
    return in;
}
ostream &operator<<(ostream &out, Date d)
{
    cout << "Ngay: " << d.getDay() << d.getMonth() << d.getYear() << endl;
    return out;
}
void Date::ShowRental()
{
    if (this->year != 0)
        cout << "\tNgay thue: " << this->day << "/" << this->month << "/" << this->year << endl;
}
Date Date::getTimeNow()
{
    time_t now = time(0);
    tm *dt = localtime(&now);
    Date d(dt->tm_mday, dt->tm_mon + 1, dt->tm_year + 1900);
    return d;
}
void Date::ShowReturn(int number)
{
    for (int i = 0; i < number; i++)
        this->NextDay();
    if (this->year != 0)
        cout << "\tNgay tra: " << this->day << "/" << this->month << "/" << this->year << endl;
}
bool Date::IsYear(int y)
{
    if (y % 400 == 0)
        return true;
    else if (y % 100 != 0 && y % 4 == 0)
        return true;
    else
        return false;
}
int Date::DayMonth()
{
    if (this->IsYear(this->year) && this->month == 2)
        return 29;
    else
        switch (this->month)
        {
        case 2:
            return 28;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
            break;
        case 0:
            return 0;
            break;
        }
    return 0;
}
void Date::NextDay()
{
    int y = this->year;
    int m = this->month;
    int d = this->day;
    if (this->day <= this->DayMonth())
    {
        d = this->day + 1;
        if (this->month != 12 && this->day == this->DayMonth())
        {
            d = 1;
            m = this->month + 1;
        }
        else if (this->month == 12 && this->day == this->DayMonth())
        {
            d = 1;
            y = this->year + 1;
            m = 1;
        }
        else if (this->month == 2)
        {
            if (this->IsYear(this->year))
            {
                if (this->day == 29)
                {
                    d = 1;
                    m = this->month + 1;
                }
            }
            else if (this->day == 28)
                d = 1;
            m = this->month + 1;
        }
    }
    this->setDay(d);
    this->setMonth(m);
    this->setYear(y);
}
