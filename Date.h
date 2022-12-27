#include <iomanip>
#include <iostream>
#include <fstream>
#include <limits>
using namespace std;
#pragma once

class Date
{
    private:
        int day, month, year;
    public:
        Date(int = 0, int = 0, int = 0);
        Date(const Date&);
        ~Date();
        void setDay(int );
        int getDay();
        void setMonth(int);
        int getMonth();
        void setYear(int);
        int getYear();
        friend istream& operator >> (istream&, Date&);
        friend ostream& operator << (ostream&, Date);
        void ShowRental(); //Hien thi ngay thue xe cua khach
        bool IsYear(int ); // kiem tra nam nhuan
        int DayMonth(); 
        void NextDay();
        void ShowReturn(int ); //Hien thi ngay tra xe
        Date getTimeNow(); //tra gia tri ngay hien tai
};