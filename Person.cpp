#include "Person.h"
Person::Person(string name, int age, string cmnd, string sdt, string add) : Name(name), Age(age), CMND(cmnd), SDT(sdt), Add(add) {}
Person::Person(const Person &per)
{
    Person(per.Name, per.Age, per.CMND, per.SDT, per.Add);
}
Person::~Person() {}
void Person::setName(string name)
{
    this->Name = name;
}
string Person::getName()
{
    return this->Name;
}
void Person::setAge(int age)
{
    this->Age = age;
}
int Person::getAge()
{
    return this->Age;
}
void Person::setCMND(string cmnd)
{
    this->CMND = cmnd;
}
string Person::getCMND()
{
    return this->CMND;
}
void Person::setSDT(string sdt)
{
    this->SDT = sdt;
}
string Person::getSDT()
{
    return this->SDT;
}
void Person::setAdd(string add)
{
    this->Add = add;
}
string Person::getAdd()
{
    return this->Add;
}
void Person::Show()
{
    if (this->getAge() != 0)
    {
        cout << "\tTen khach hang: " << this->Name << endl;
        cout << "\tNam Sinh: " << this->Age << endl;
        cout << "\tSo CMND/Ho chieu: " << this->CMND << endl;
        cout << "\tSo dien thoai: " << this->SDT << endl;
        cout << "\tDia chi: " << this->Add << endl;
    }
}
istream &operator>>(istream &in, Person &p)
{
    cout << "Nhap Ten khach hang: ";
    getline(in, p.Name);
    cout << "Nhap Nam Sinh: ";
    in >> p.Age;
    cout << "Nhap So CMND/Ho chieu: ";
    in.ignore();
    getline(in, p.CMND);
    cout << "Nhap So DT: ";
    getline(in, p.SDT);
    cout << "Nhap Dia chi: ";
    getline(in, p.Add);
    return in;
}

ostream &operator<<(ostream &out, Person p)
{
    cout << "\tTen khach hang: " << p.getName() << endl;
    cout << "\tNam Sinh: " << p.getAge() << endl;
    cout << "\tSo CMND/Ho chieu: " << p.getCMND() << endl;
    cout << "\tSo dien thoai: " << p.getSDT() << endl;
    cout << "\tDia chi: " << p.getAdd() << endl;
}
void Person::showTable()
{
    char _char = char(179);
    cout << _char << setw(20) << this->Name + " ";
    cout << _char << setw(19) << this->Age << " ";
    cout << _char << setw(20) << this->CMND + " ";
    cout << _char << setw(20) << this->SDT + " ";
    cout << _char << setw(20) << this->Add + " ";

    cout << _char << endl
         << char(195);
    for (int i = 0; i <= 99; i++)
    {

        if (i == 20 || i == 40 || i == 60 || i == 80 || i == 100 ) 
        {
            cout << char(197);
        }
        cout << char(196);
    }
    cout << char(180) << endl;
}
void Person::Show1()
{
    cout << char(213);
    for (int i = 0; i <= 99; i++)
    {

        if (i == 20 || i == 40 || i == 60 || i == 80 || i == 100 )
        {
            cout << char(209);
        }
        cout << char(205);
    }
    cout << char(184) << endl;
    char _char = char(179);
    cout << _char << setw(20) << "TEN KHACH HANG  ";
    cout << _char << setw(20) << "NAM SINH     ";
    cout << _char << setw(20) << "SO CMND/HO CHIEU  ";
    cout << _char << setw(20) << "SO DIEN THOAI   ";
    cout << _char << setw(20) << "DIA CHI           ";
    cout << _char << endl;
    cout << char(198);

    for (int i = 0; i <= 99; i++)
    {

        if (i == 20 || i == 40 || i == 60 || i == 80 || i == 100)
        {
            cout << char(216);
        }
        cout << char(205);
    }
    cout << char(181) << endl;
        this->showTable();
    cout << char(212);

    for (int i = 0; i <= 99; i++)
    {

        if (i == 20 || i == 40 || i == 60 || i == 80 || i == 100)
        {
            cout << char(207);
        }
        cout << char(205);
    }
    cout << char(190) << endl;
}
