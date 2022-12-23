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
void ThueXe::ShowTB1()
{
    cout << char(213);
    for (int i = 0; i <= 164; i++)
    {
        if (i == 25 || i == 45 || i == 65 || i == 85 || i == 105 || i == 125 || i == 145 || i == 165)
        {
            cout << char(209);
        }
        cout << char(205);
    }
    cout << char(184) << endl;
    char _char = char(179);
    cout << _char << setw(25) << "TEN KHACH HANG  ";
    cout << _char << setw(20) << "SO CMND/HO CHIEU ";
    cout << _char << setw(20) << "SO DIEN THOAI   ";
    cout << _char << setw(20) << "TEN XE        ";
    cout << _char << setw(20) << "BIEN SO XE     ";
    cout << _char << setw(20) << "GIA(VND)    ";
    cout << _char << setw(20) << "NGAY THUE    ";
    cout << _char << setw(20) << "SO NGAY THUE   "; 

    cout << _char << endl;
    cout << char(198);
    for (int i = 0; i <= 164; i++)
    {
        if (i == 25 || i == 45 || i == 65 || i == 85 || i == 105 || i == 125 || i == 145 || i == 165)
        {
            cout << char(216);
        }
        cout << char(205);
    }
    cout << char(181) << endl;
//CHO IN DU LIEU
    cout << char(212);
    for (int i = 0; i <= 164; i++)
    {
        if (i == 25 || i == 45 || i == 65 || i == 85 || i == 105 || i == 125 || i == 145 || i == 165)
        {
            cout << char(207);
        }
        cout << char(205);
    }
    cout << char(190) << endl;
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
    cout << _char << setw(11) << this->DateRetal.getDay() << "/" << this->DateRetal.getMonth() << "/" << this->DateRetal.getYear() << " ";

    cout << _char << setw(19) << this->Number << " ";
    
    cout << _char << endl
         << char(195);
    for (int i = 0; i <= 164; i++)
    {
        if (i == 25 || i == 45 || i == 65 || i == 85 || i == 105 || i == 125 || i == 145 || i == 165)
        {
            cout << char(197);
        }
        cout << char(196);
    }
    cout << char(180) << endl;
}
void ThueXe::ShowTBOfFile(ofstream& out)
{
    // ofstream out;
    // out.open("outfile.txt");
    if (!out)
    {
        cerr << "Error: file not opened" << endl;
        return ;
    }
    // char _char = char(179);
    out <</* _char <<*/ setw(25) << this->Per.getName() + " ";
    out <</* _char <<*/ setw(20) << this->Per.getCMND() + " ";
    out <</* _char <<*/ setw(20) << this->Per.getSDT() + " ";
    out <</* _char <<*/ setw(20) << this->Moto.getNameBike() + " ";
    out <</* _char <<*/ setw(20) << this->Moto.getBienso() + " ";
    out <</* _char <<*/ setw(19) << this->Moto.getGia() << " ";
    out <</* _char <<*/ setw(11) << this->DateRetal.getDay() << "/" << this->DateRetal.getMonth() << "/" << this->DateRetal.getYear() << " ";

    out <</* _char <<*/ setw(19) << this->Number << " ";
    
    // out << _char << endl
    //      << char(195);
    // for (int i = 0; i <= 164; i++)
    // {
    //     if (i == 25 || i == 45 || i == 65 || i == 85 || i == 105 || i == 125 || i == 145 || i == 165)
    //     {
    //         out << char(197);
    //     }
    //     out << char(196);
    // }
    // out << char(180) << endl;
    // out.close();
}