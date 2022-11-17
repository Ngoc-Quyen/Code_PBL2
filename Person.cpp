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
    cout << "\tTen khach hang: " << this->Name << endl;
    cout << "\tTuoi: " << this->Age << endl;
    cout << "\tSo CMND/Ho chieu: " << this->CMND << endl;
    cout << "\tSo dien thoai: " << this->SDT << endl;
    cout << "\tDia chi: " << this->Add << endl;
}
istream &operator>>(istream &in, Person &p)
{
    cout << "Nhap Ten khach hang: ";
    getline(in, p.Name);
    cout << "Nhap Tuoi: ";
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
    cout << "\tTuoi: " << p.getAge() << endl;
    cout << "\tSo CMND/Ho chieu: " << p.getCMND() << endl;
    cout << "\tSo dien thoai: " << p.getSDT() << endl;
    cout << "\tDia chi: " << p.getAdd() << endl;
}
