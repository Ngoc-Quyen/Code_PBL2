#include "ThueXe.h"
ThueXe::ThueXe() {}
ThueXe::ThueXe(const Person &p, const Motobike &m, /* const Date& d1, const Date &d2, */ int d)
{
    this->Per = p;
    this->Moto = m;
    // this->DateRetal = d1;
    // this->DateReturn = d2;
    this->Number = d;
}
ThueXe::~ThueXe() {}
int ThueXe::tong = 0;
void ThueXe::Show()
{
    this->Per.Show();
    this->Moto.Show();
    this->DateRetal.ShowRental();
    // this->DateRetal.ShowReturn(this->Number);
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