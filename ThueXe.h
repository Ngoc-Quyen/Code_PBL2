#include <fstream>
#include <iostream>
#include "Person.h"
#include "Motobike.h"
#include "Date.h"
using namespace std;
#pragma once

class ThueXe
{
    private:
        Person Per;
        Motobike Moto;
        Date DateRetal;
        Date DateReturn;
        int Number;
        static int tong;

    public:
        ThueXe();
        ThueXe(const Person &, const Motobike&, /*const Date&, const Date&, */int = 0);
        ~ThueXe();
        void Show();
        long long GetMoney();
        void ShowBill();
        void ShowTT();
        ThueXe& operator = (const ThueXe&);
        //ThueXe& operator () (const ThueXe&);
        friend class List;
        void ShowTB();
        void ShowTB1();
        void ShowTBOfFile();
};