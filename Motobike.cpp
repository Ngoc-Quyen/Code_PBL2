#include "Motobike.h"

Motobike::Motobike(string name, string bienso, int phankhoi, string mau, long gia, int c) : NameBike(name), BienSo(bienso), PhanKhoi(phankhoi), Mau(mau), Gia(gia), isRend(c) {}
Motobike::Motobike(const Motobike &other)
{
    Motobike(other.NameBike, other.BienSo, other.PhanKhoi, other.Mau, other.Gia, other.isRend);
}
Motobike::~Motobike() {}
void Motobike::setBienso(string bienso)
{
    this->BienSo = bienso;
}
string Motobike::getBienso()
{
    return this->BienSo;
}
void Motobike::setNameBike(string name)
{
    this->NameBike = name;
}
string Motobike::getNameBike()
{
    return this->NameBike;
}
void Motobike::setPhanKhoi(int phankhoi)
{
    this->PhanKhoi = phankhoi;
}
int Motobike::getPhanKhoi()
{
    return this->PhanKhoi;
}
void Motobike::setMau(string mau)
{
    this->Mau = mau;
}
string Motobike::getMau()
{
    return this->Mau;
}
void Motobike::setGia(long gia)
{
    this->Gia = gia;
}
long Motobike::getGia()
{
    return this->Gia;
}
void Motobike::setIsRend(int c)
{
    this->isRend = c;
}
int Motobike::getIsRend()
{
    return this->isRend;
}
void Motobike::Show()
{
    cout << "\tTen xe: " << this->NameBike << endl;
    cout << "\tBien so xe: " << this->BienSo << endl;
    cout << "\tPhan khoi xe: " << this->PhanKhoi << "cc" << endl;
    cout << "\tMau xe: " << this->Mau << endl;
    cout << "\tGia thue: " << this->Gia << endl;
    cout << "\tTinh trang: ";
    if (this->isRend != 0)
        cout << "Da thue\n";
    else
        cout << "Chua thue\n";
}

istream &operator>>(istream &in, Motobike &moto)
{
    cout << "\tNhap Ten xe: ";
    getline(in, moto.NameBike);
    cout << "\tNhap Bien so xe: ";
    getline(in, moto.BienSo);
    cout << "\tNhap Phan khoi xe: ";
    in >> moto.PhanKhoi;
    in.ignore();
    cout << "\tNhap Mau xe: ";
    getline(in, moto.Mau);
    cout << "\tNhap Gia thue: ";
    in >> moto.Gia;
    in.ignore();
    moto.isRend = 0;
    return in;
}
ostream &operator<<(ostream &out, Motobike moto)
{
    cout << "\tTen xe: " << moto.getNameBike() << endl;
    cout << "\tien so xe: " << moto.getBienso() << endl;
    cout << "\tPhan khoi xe: " << moto.getPhanKhoi() << "cc" << endl;
    cout << "\tMau xe: " << moto.getMau() << endl;
    cout << "\tGia thue: " << moto.getGia() << endl;
    cout << "\tTinh trang: ";
    if (moto.getIsRend() != 0)
        cout << "Da thue\n";
    else
        cout << "Chua thue\n";
}


void Motobike::showTable()
{
    char _char = char(179);
    cout << _char << setw(20) << this->NameBike + " ";
    cout << _char << setw(20) << this->BienSo + "  ";
    cout << _char << setw(18) << this->PhanKhoi << "CC";
    cout << _char << setw(20) << this->Mau + "  ";
    cout << _char << setw(17) << this->Gia << "VND";
    if (this->getIsRend() != 0) cout <<  _char << setw(20) << "Da thue  ";
    else cout << _char << setw(20) << "Chua thue  ";

    cout << _char << endl
         << char(195);
    for (int i = 0; i <= 119; i++)
    {

        if (i == 20 || i == 40 || i == 60 || i == 80 || i == 100 || i == 120) //|| i == 116 || i == 136)
        {
            cout << char(197);
        }
        cout << char(196);
    }
    cout << char(180) << endl;
}

void Motobike::Show1()
{
    cout << char(213);
    for (int i = 0; i <= 119; i++)
    {
        if (i == 20 || i == 40 || i == 60 || i == 80 || i == 100 || i == 120)
        {
            cout << char(209);
        }
        cout << char(205);
    }
    cout << char(184) << endl;
    char _char = char(179);
    cout << _char << setw(20) << "TEN XE        ";
    cout << _char << setw(20) << "BIEN SO XE     ";
    cout << _char << setw(20) << "PHAN KHOI     ";
    cout << _char << setw(20) << "MAU SAC      ";
    cout << _char << setw(20) << "GIA         ";
    cout << _char << setw(20) << "TINH TRANG XE    ";
    cout << _char << endl;
    cout << char(198);

    for (int i = 0; i <= 119; i++)
    {

        if (i == 20 || i == 40 || i == 60 || i == 80 || i == 100 || i == 120)
        {
            cout << char(216);
        }
        cout << char(205);
    }
    cout << char(181) << endl;
        this->showTable();
    cout << char(212);

    for (int i = 0; i <= 119; i++)
    {

        if (i == 20 || i == 40 || i == 60 || i == 80 || i == 100 || i == 120)
        {
            cout << char(207);
        }
        cout << char(205);
    }
    cout << char(190) << endl;
}
