#include "ThueXe.h"
ThueXe::ThueXe() {}
ThueXe::ThueXe(const Person &p, const Motobike &m, int d)
{
    this->Per = p;
    this->Moto = m;
    this->Number = d;
}
ThueXe::~ThueXe() {}
int ThueXe::tong = 0;
void ThueXe::Show()
{
    this->Per.Show();
    this->Moto.Show();
    this->DateRetal.ShowRental();
    this->DateReturn.ShowReturn(this->Number);

    if (this->GetMoney() > 0)
    {
        cout << "\tSo ngay thue: " << this->Number << endl;
    }
}
long long ThueXe::GetMoney()
{
    return this->Moto.getGia() * this->Number;
}
void ThueXe::ShowTT()
{
    cout << "Thong Tin Thue Xe Cua Quy Khach\n";
    this->Per.Show();
    this->Moto.Show();
    this->DateRetal.ShowRental();
    cout << "\tSo ngay thue: " << this->Number << endl;
    cout << "\tTong tien thanh toan: " << this->GetMoney() << endl;
    cout << "Cam on quy khach da su dung dich vu cua chung toi\n";
}
void ThueXe::ShowBill()
{
    cout << "-------------Hoa Don Cua Ban-------------\n";
    this->Per.Show();
    this->Moto.Show();
    this->DateRetal.ShowRental();
    this->DateRetal.ShowReturn(this->Number);
    cout << "\tSo ngay thue: " << this->Number << endl;
    cout << "\tTong tien thanh toan: " << this->GetMoney() << endl;
    ThueXe::tong += this->GetMoney();
    cout << "-------------Hen Gap Lai----------------" << endl;
}
ThueXe &ThueXe::operator=(const ThueXe &tx)
{
    this->Per = tx.Per;
    this->Moto = tx.Moto;
    this->DateRetal = tx.DateRetal;
    this->DateReturn = tx.DateReturn;
    this->Number = tx.Number;
}
void ThueXe::ShowTB()
{
    char _char = char(179);
    cout << _char << setw(25) << this->Per.getName() + " ";
    cout << _char << setw(20) << this->Per.getCMND() + " ";
    cout << _char << setw(20) << this->Per.getSDT() + " ";
    cout << _char << setw(20) << this->Moto.getNameBike() + " ";
    cout << _char << setw(20) << this->Moto.getBienso() + " ";
    cout << _char << setw(19) << this->Moto.getGia() << " ";
    if (this->DateRetal.getDay() < 10 && this->DateRetal.getMonth() < 10)
        cout << _char << setw(10) << "0" << this->DateRetal.getDay() << "/0" << this->DateRetal.getMonth() << "/" << this->DateRetal.getYear() << " ";
    else 
        if (this->DateRetal.getDay() < 10 && this->DateRetal.getMonth() > 10)
            cout << _char << setw(10) << "0" << this->DateRetal.getDay() << "/" << this->DateRetal.getMonth() << "/" << this->DateRetal.getYear() << " ";
        else 
            if (this->DateRetal.getDay() > 10 && this->DateRetal.getMonth() < 10)
                cout << _char << setw(11) << this->DateRetal.getDay() << "/0" << this->DateRetal.getMonth() << "/" << this->DateRetal.getYear() << " ";
            else cout << _char << setw(11) << this->DateRetal.getDay() << "/" << this->DateRetal.getMonth() << "/" << this->DateRetal.getYear() << " ";
    cout << _char << setw(19) << this->Number << " ";
    cout << _char << setw(19) << this->GetMoney() << " ";
    cout << _char << endl
         << char(195);
    for (int i = 0; i <= 184; i++)
    {
        if (i == 25 || i == 45 || i == 65 || i == 85 || i == 105 || i == 125 || i == 145 || i == 165 || i == 185)
        {
            cout << char(197);
        }
        cout << char(196);
    }
    cout << char(180) << endl;
}
void ThueXe::ShowTBOfFile(ofstream& out)
{
    if (!out)
    {
        cerr << "Error: file not opened" << endl;
        return ;
    }
    out << setw(25) << this->Per.getName() + " ";
    out << setw(20) << this->Per.getCMND() + " ";
    out << setw(20) << this->Per.getSDT() + " ";
    out << setw(20) << this->Moto.getNameBike() + " ";
    out << setw(20) << this->Moto.getBienso() + " ";
    out << setw(19) << this->Moto.getGia() << " ";
    if (this->DateRetal.getDay() < 10 && this->DateRetal.getMonth() < 10)
        out << setw(11) << "0" << this->DateRetal.getDay() << "/0" << this->DateRetal.getMonth() << "/" << this->DateRetal.getYear() << " ";
    else 
        if (this->DateRetal.getDay() < 10 && this->DateRetal.getMonth() > 10)
            out << setw(11) << "0" << this->DateRetal.getDay() << "/" << this->DateRetal.getMonth() << "/" << this->DateRetal.getYear() << " ";
        else 
            if (this->DateRetal.getDay() > 10 && this->DateRetal.getMonth() < 10)
                out << setw(12) << this->DateRetal.getDay() << "/0" << this->DateRetal.getMonth() << "/" << this->DateRetal.getYear() << " ";
            else out << setw(12) << this->DateRetal.getDay() << "/" << this->DateRetal.getMonth() << "/" << this->DateRetal.getYear() << " ";
    out << setw(19) << this->Number << " ";
    out << setw(19) << this->GetMoney() << " ";
}