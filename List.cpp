#include "List.h"
#include <iostream>
#include <fstream>
using namespace std;
List::List()
{
    this->p = nullptr;
    this->len = 0;
}
List::List(ThueXe *t, int len)
{
    this->len = len;
    this->p = new ThueXe[this->len];
    for (int i = 0; i < this->len; i++)
    {
        *(this->p + i) = *(t + i);
    }
}
List::List(const List &t)
{
    this->len = t.len;
    this->p = new ThueXe[this->len];
    for (int i = 0; i < this->len; i++)
    {
        *(this->p + i) = *(t.p + i);
    }
}
List::~List()
{
    delete[] this->p;
}
List List::operator=(const List &t)
{
    this->len = t.len;
    this->p = new ThueXe[this->len];
    for (int i = 0; i < this->len; i++)
    {
        *(this->p + i) = *(t.p + i);
    }
    return *this;
}
int List::getLength()
{
    return this->len;
}

void List::Add(Motobike &m)
{
    if (this->len == 0)
    {
        this->p = new ThueXe[this->len + 1];
        (*(this->p)).Moto = m;
    }
    else
    {
        ThueXe *tmp = new ThueXe[this->len];
        for (int i = 0; i < this->len; i++)
        {
            *(tmp + i) = *(p + i);
        }
        delete[] this->p;
        this->p = new ThueXe[this->len + 1];
        for (int i = 0; i < this->len; i++)
        {
            *(this->p + i) = *(tmp + i);
        }
        (*(this->p + this->len)).Moto = m;
        (*(this->p + this->len)).Number = 0;
        delete[] tmp;
    }
    this->len++;
}
int List::CheckBienso(Motobike &moto)
{
    for (int i = 0; i < this->len; i++)
    {
        if ((this->p + i)->Moto.getBienso().compare(moto.getBienso()) != 0)
        {
            continue;
        }
        else
            cout << "Xe da co trong he thong\n";
        return 0;
    }
    cout << "Them xe thanh cong\n";
    return 1;
}
bool List::CheckCmnd(Person &per)
{
    int count = 0;
    for (int i = 0; i < this->len; i++)
    {
        if ((per.getCMND()).compare((this->p + i)->Per.getCMND()) == 0)
        {
            count++;
        }
    }
    if (count == 1)
        return true;
    return false;
}
void List::ShowBike()
{
    system("cls");
    if (this->len == 0)
        cout << "\tKhong Co Xe Trong He Thong\n";
    else
    {
        cout << "\tDanh sach xe trong he thong\n";
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
        cout << _char << setw(20) << "PHAN KHOI(CC)  ";
        cout << _char << setw(20) << "MAU SAC      ";
        cout << _char << setw(20) << "GIA(VND)      ";
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
        for (int i = 0; i < this->len; i++)
        {
            // cout << "Motobike " << i + 1 << ":\n";
            (*(p + i)).Moto.showTable();
        }
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
}
Date getTimeNow()
{
    time_t now = time(0);
    tm *dt = localtime(&now);
    Date d(dt->tm_mday, dt->tm_mon + 1, dt->tm_year + 1900);
    return d;
}
void List::UpdateRental()
{
    system("cls");
    int cmp = 0;
    cout << "\t\t-----------Chao Mung Ban Den Voi Dich Vu Thue Xe-----------\n\n";
    this->ShowMotoUser();
    // cout << "\tMotobike 1: \n";
    if (this->len > 0)
    {
        string bs;
        cout << "Nhap Bien So Xe Muon Thue: ";
        cin >> bs;
        int k = indexOf(bs);
        if ((this->p + k)->Moto.getIsRend() != 1 && k >= 0 && k < this->len)
        {
            cin.ignore();
            cin >> ((this->p + k)->Per);
            if (CheckCmnd((this->p + k)->Per))
            {
                Date d1;
                d1 = getTimeNow();
                (*(this->p + k)).DateRetal = d1;
                cout << "Nhap So Ngay Muon Thue: ";
                cin >> (this->p + k)->Number;
                (*(this->p + k)).Moto.setIsRend(1);
                system("cls");

                (this->p + k)->ShowTT();
            }
            else
            {
                Person p;
                (this->p + k)->Per = p;
                cout << "\tBan Dang Thue Mot Xe Khac Trong He Thong\n";
            }
        }
        else
        {
            do
            {
                cout << "\tXe Da Duoc Nguoi Khac Thue Hoac Khong Co Trong He Thong\n";
                cmp = 1;
                cout << "Ban Co MUon Thue Xe Khac Khong? y/n\n";
                char ch;
                cout << "Nhap Lua Chon: ";
                cin >> ch;
                if (ch == 'n')
                {
                    cout << "CAM ON QUY KHACH\n";
                    cmp = 0;
                }

                else
                {

                    // cout << "\tMotobike 1: \n";
                    string bs;
                    cout << "Nhap Bien So Xe Muon Thue: ";
                    cin >> bs;
                    int k = indexOf(bs);
                    if ((this->p + k)->Moto.getIsRend() != 1 && k >= 0 && k < this->len)
                    {
                        cin.ignore();
                        cin >> (this->p + k)->Per;
                        if (CheckCmnd((this->p + k)->Per))
                        {
                            Date d1;
                            d1 = getTimeNow();
                            (*(this->p + k)).DateRetal = d1;
                            cout << "Nhap So Ngay Muon Thue: ";
                            cin >> (this->p + k)->Number;
                            (*(this->p + k)).Moto.setIsRend(1);
                            system("cls");
                            (this->p + k)->ShowTT();
                            cmp = 0;
                        }
                        else
                        {
                            Person p;
                            (this->p + k)->Per = p;
                            cout << "\tBan Dang Thue Mot Xe Khac Trong He Thong\n";
                        }
                    }
                }
            } while (cmp);
        }
    }
}
int List::isMaching(string t1, string t2)
{
    for (int i = 0; i < t2.length(); i++)
    {
        if (t2[i] == t1[0])
        {
            int count = 0;
            for (int j = 0; j < t1.length(); j++)
            {
                if (t2[j + i] == t1[j])
                    count++;
            }
            if (count == t1.length())
                return i;
        }
    }
    return -1;
}
int List::indexOf(string Bienso)
{
    for (int i = 0; i < this->len; i++)
    {
        if (isMaching(Bienso, (this->p + i)->Moto.getBienso()) != -1)
        {
            return i;
        }
    }
    return -1;
}
int List::indexOf(int phankhoi)
{
    for (int i = 0; i < this->len; i++)
    {
        if (phankhoi == (this->p + i)->Moto.getPhanKhoi())
            return i;
    }
    return -1;
}
void List::EnterListMoto()
{
    ifstream in;
    string filename;

    // in.open("ListMotor.txt");
    do
    {
        cout << "Nhap Ten File: ";
        cin >> filename;
        filename += ".txt";
        in.open(filename);
        if (in.fail())
        {
            cout << "File not found: " << filename << endl;
            continue;
        }
        else
        {
            int n;
            in >> n;
            this->len = n;
            this->p = new ThueXe[this->len];
            in.ignore();
            for (int i = 0; i < this->len; i++)
            {
                Motobike m;
                in >> m;
                (*(this->p + i)).Moto = m;
                (*(this->p + i)).Number = 0;
            }
            system("cls");
            cout << "\t---Upload from file Motorbike---\n";
            break;
        }

    } while (1);

    // in.open("fileinput.txt");

    in.close();
}
void List::EnterListUser()
{
    ifstream in;
    string filename;
    do
    {
        cout << "Nhap Ten File: ";
        cin >> filename;
        filename += ".txt";
        in.open(filename);
        if (in.fail())
        {
            cout << "File not found: " << filename << endl;
            continue;
        }
        else
        {
            int n;
            in >> n;
            in.ignore();
            for (int i = 0; i < n; i++)
            {
                Person per;
                int day;
                in >> per;
                in >> day;
                in.ignore();
                Date d2 = getTimeNow();
                (*(this->p + i)).Per = per;
                (*(this->p + i)).DateRetal = d2;
                (*(this->p + i)).Number = day;
                (*(this->p + i)).Moto.setIsRend(1);
            }
            system("cls");
            cout << "\t---Uploat from file Person---\n";
            break;
        }
    } while (1);
    in.close();
}
void List::ShowMotoUser()
{
    if (this->len == 0)
    {
        cout << "Khong  co xe trong he thong\n";
        // system("pause");
    }
    else
    {
        // cout << "------Danh sach xe chua thue trong he thong------\n";
        int j = 1;
        cout << char(213);
        for (int i = 0; i <= 99; i++)
        {
            if (i == 20 || i == 40 || i == 60 || i == 80 || i == 100)
            {
                cout << char(209);
            }
            cout << char(205);
        }
        cout << char(184) << endl;
        char _char = char(179);
        cout << _char << setw(20) << "TEN XE        ";
        cout << _char << setw(20) << "BIEN SO XE     ";
        cout << _char << setw(20) << "PHAN KHOI(CC)   ";
        cout << _char << setw(20) << "MAU SAC      ";
        cout << _char << setw(20) << "GIA(VND)     ";
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
        for (int i = 0; i < this->len; i++)
        {
            if (!(*(this->p + i)).Moto.getIsRend())
            {
                // cout << "Motobike " << j << ":" << endl;
                // (*(this->p + i)).Moto.Show();
                (*(this->p + i)).Moto.ShowTB();
                j++;
            }
        }
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
}
void List::ShowCustomer()
{
    if (this->len == 0)
    {
        cout << "Khong co xe trong he thong\n";
    }
    else
    {
        cout << "------Danh sach xe da thue va khach hang thue------\n";
        int j = 1;
        for (int i = 0; i < this->len; i++)
        {
            if ((*(this->p + i)).Moto.getIsRend())
            {
                cout << "Customer " << j << ":" << endl;
                (*(this->p + i)).Show();
                j++;
            }
        }
    }
}

long long List::SumMoney()
{
    long long sum = ThueXe::tong;
    for (int i = 0; i < this->len; i++)
    {
        if ((this->p + i)->Number > 0)
            sum += (*(this->p + i)).GetMoney();
    }
    return sum;
}
void List::FindUser(string Bienso, int &q)
{
    system("cls");
    q = 0;
    int k = indexOf(Bienso);
    if (k != -1)
    {
        if (!(*(this->p + k)).Number)
        {
            q = 1;
            cout << "Thong Tin Motobike: \n";
            // (*(this->p + k)).Moto.Show();
            (*(this->p + k)).Moto.ShowTB1();
        }
        if (q == 0)
        {
            (*(this->p + k)).ShowTT();
        }
            // cout << "Xe Dang Duoc Thue! Quy Khach Vui Long Chon Xe Khac\n";
    }
    else
    {
        cout << "Khong Tim Thay Xe Trong He Thong! Vui Long Kiem Tra Lai!\n";
    }
}
void List::FindUser(int phankhoi, int &q)
{
    q = 0;
    int k = 0;
    for (int i = 0; i < this->len; i++)
    {
        if (!(*(this->p + i)).Moto.getIsRend())
        {
            k = 1;
            if (phankhoi == (*(this->p + i)).Moto.getPhanKhoi())
            {
                q = 1;
                (*(this->p + i)).Moto.ShowTB1();
            }
        }
    }
    if (k == 0)
        cout << "Xe Da Duoc Thue! Quy Khach Vui Long Chon Xe Khac\n";
    if (q == 0)
        cout << "Khong Tim Thay Xe Trong He Thong! Vui Long Kiem Tra Lai!\n";
}
void List::BillUser(string bienso, int &q)
{
    int k = indexOf(bienso);
    q = 0;
    if (k != -1)
    {
        if ((*(this->p + k)).Moto.getIsRend() != 0)
        {
            (*(this->p + k)).ShowBill();
            q = 1;
        }
        if (q == 0)
            cout << "Xe Chua Duoc Thue!\n";
    }
    else
        cout << "Khong Tim Thay Xe Trong He Thong! Vui Long Kiem Tra Lai!\n";
}
void List::DeleteMoto(string bienso)
{
    int k = indexOf(bienso);
    if (k != -1)
    {
        if (!(*(this->p + k)).Moto.getIsRend())
        {
            ThueXe *tmp = new ThueXe[this->len];
            for (int i = 0; i < this->len; i++)
            {
                *(tmp + i) = *(this->p + i);
            }
            delete[] p;
            this->p = new ThueXe[this->len];
            for (int i = 0; i < k; i++)
            {
                *(this->p + i) = *(tmp + i);
            }
            for (int i = k; i < this->len - 1; i++)
            {
                *(this->p + i) = *(tmp + i + 1);
            }
            this->len--;
            system("cls");
            cout << "Xoa Xe Thanh Cong!\n";
        }
        else
            cout << "Xe Dang Duoc Thue!\n";
    }
    else
        cout << "Khong Co Xe Trong He Thong! Vui Long Kiem Tra Lai!\n";
}
void List::UpdateAfter(int n)
{
    if (n < 0 || n > this->len)
        cout << "So Luong Xe Nhap Vao Khong Hop Le!\n";
    else
    {
        for (int i = 0; i < n; i++)
        {
            string bienso;
            cout << "Nhap Bien So Xe Muon Tra: ";
            cin >> bienso;
            int k = indexOf(bienso);
            if (k == -1)
                cout << "Xe Khong Co Trong He Thong! Vui Long Kiem Tra Lai!\n";
            else
            {
                if ((*(this->p + k)).Moto.getIsRend() != 0)
                {
                    Date d = getTimeNow();
                    (*(this->p + k)).DateReturn = d;
                    (*(this->p + k)).ShowBill();
                    Clear(*(this->p + k));
                    (*(this->p + k)).Moto.setIsRend(0);
                }
                else
                    cout << "Xe Co Trong He Thong Va Chua Duoc Thue!\n";
            }
        }
    }
}
void List::UpdateAfter(string bs)
{
    int k = indexOf(bs);
    if (k == -1)
        cout << "Xe Khong Co Trong He Thong! Vui Long Kiem Tra Lai!\n";
    else
    {
        if ((*(this->p + k)).Moto.getIsRend() != 0)
        {
            Date d = getTimeNow();
            (*(this->p + k)).DateReturn = d;
            // (*(this->p + k)).ShowBill();
            Clear(*(this->p + k));
            (*(this->p + k)).Moto.setIsRend(0);
        }
        else
            cout << "Xe Co Trong He Thong Va Chua Duoc Thue!\n";
    }
}
void List::Clear(ThueXe &tra)
{
    Person a;
    tra.Per = a;
    tra.Number = 0;
    Date d;
    tra.DateRetal = tra.DateReturn = d;
}
void List::UpdateDateRental(string bienso)
{
    Date n;
    int k = indexOf(bienso);
    if ((this->p + k)->Moto.getIsRend() == 0)
    {
        cout << "Xe Chua Duoc Thue!\n";
        return;
    }
    if (k == -1)
    {
        cout << "Bien So Khong Dung\n";
        return;
    }
    cout << "Nhap Ngay Thue Muon Cap Nhat \n";
    cin >> n;
    (this->p + k)->DateRetal = n;
    cout << "\nCap Nhat Thanh Cong\n";
}

void List::ShowRented()
{
    if (this->len == 0)
    {
        cout << "\tKhong Co Xe Nao Trong He Thong\n";
    }
    else
    {
        // cout << "\tDanh Sach Xe Va Tinh Trang Trong He Thong\n";
        int j = 1;
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
        cout << _char << setw(20) << "SO CMND/HO CHIEU  ";
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
        for (int i = 0; i < this->len; i++)
        {
            if ((*(this->p + i)).Moto.getIsRend())
            {
                // cout << "Customer " << j << endl;

                // (*(this->p + i)).Show();
                (*(this->p + i)).ShowTB();

                j++;
            }
        }
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
        if (j == 1)
        {
            cout << "\tChua Co Khach Thue\n";
        }
    }
}
void List::ShowRentedOfFile(ofstream &out)
{

    // ofstream out;
    // out.open("outfile.txt");
    if (!out)
    {
        cerr << "Error: file not opened" << endl;
        return;
    }
    if (this->len == 0)
    {
        out << "\tKhong Co Xe Nao Trong He Thong\n";
    }
    else
    {
        // out << "\tDanh Sach Xe Va Tinh Trang Trong He Thong\n";
        int j = 1;
        // out << char(213);
        // for (int i = 0; i <= 164; i++)
        // {
        //     if (i == 25 || i == 45 || i == 65 || i == 85 || i == 105 || i == 125 || i == 145 || i == 165)
        //     {
        //         out << char(209);
        //     }
        //     out << char(205);
        // }
        // out << char(184) << endl;
        // char _char = char(179);
        out << setw(3) << "STT";
        out /*<< _char*/ << setw(25) << "TEN KHACH HANG";
        out /*<< _char*/ << setw(20) << "SO CMND/HO CHIEU";
        out /*<< _char*/ << setw(20) << "SO DIEN THOAI";
        out /*<< _char*/ << setw(20) << "TEN XE";
        out /*<< _char*/ << setw(20) << "BIEN SO XE";
        out /*<< _char*/ << setw(20) << "GIA(VND)";
        out /*<< _char*/ << setw(20) << "NGAY THUE";
        out /*<< _char*/ << setw(20) << "SO NGAY THUE";

        out /*<< _char*/ << endl;
        // out << char(198);
        // for (int i = 0; i <= 164; i++)
        // {
        //     if (i == 25 || i == 45 || i == 65 || i == 85 || i == 105 || i == 125 || i == 145 || i == 165)
        //     {
        //         out << char(216);
        //     }
        //     out << char(205);
        // }
        // out << char(181) << endl;
        for (int i = 0; i < this->len; i++)
        {
            if ((*(this->p + i)).Moto.getIsRend())
            {
                // out << "Customer " << j << endl;

                // (*(this->p + i)).Show();
                out << setw(3) << j;
                (*(this->p + i)).ShowTBOfFile(out); 
                out << endl;
                j++;
            }
        }
        // out << char(212);
        // for (int i = 0; i <= 164; i++)
        // {
        //     if (i == 25 || i == 45 || i == 65 || i == 85 || i == 105 || i == 125 || i == 145 || i == 165)
        //     {
        //         out << char(207);
        //     }
        //     out << char(205);
        // }
        // out << char(190) << endl;
        if (j == 1)
        {
            out << "\tChua Co Khach Thue\n";
        }
    }
    // out.close();
}
void List::UpdatePrice(string bienso)
{
    int n;
    int k = indexOf(bienso);
    if (k != -1)
    {
        if ((this->p + k)->Moto.getIsRend())
            cout << "\n----Xe Dang Duoc Thue! Khong Thue Cap Nhat Gia!----\n";
        else
        {
            cout << "Nhap Gia Xe Muon Cap Nhat: ";
            cin >> n;
            (this->p + k)->Moto.setGia(n);
            cout << "\n------Cap Nhat Thanh Cong------\n";
        }
    }
    else
        cout << "\n------Xe Khong Co Trong He Thong! Vui Long Kiem Tra Lai!------\n";
}
void List::Merge(List &t, int l, int m, int r, bool (*TypeSort)(int, int))
{
    int n1 = m - l + 1;
    int n2 = r - m;
    ThueXe *t1 = new ThueXe[n1];
    ThueXe *t2 = new ThueXe[n2];
    for (int i = 0; i < n1; i++)
    {
        *(t1 + i) = *(t.p + l + i);
    }
    for (int j = 0; j < n2; j++)
    {
        *(t2 + j) = *(t.p + m + 1 + j);
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (TypeSort((t1 + i)->Moto.getGia(), (t2 + j)->Moto.getGia()))
        {
            *(t.p + k) = *(t1 + i);
            i++;
        }
        else
        {
            *(t.p + k) = *(t2 + j);
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        *(t.p + k) = *(t1 + i);
        i++;
        k++;
    }
    while (j < n2)
    {
        *(t.p + k) = *(t2 + j);
        k++;
        j++;
    }
}
void List::MergeSort(List &t, int l, int r, bool (*Type)(int, int))
{
    if (l < r)
    {
        int m = (l + r) / 2;
        MergeSort(t, l, m, Type);
        MergeSort(t, m + 1, r, Type);
        Merge(t, l, m, r, Type);
    }
}
void List::MergeAdm(List &t, int l, int m, int r, bool (*TypeSort)(int, int))
{
    int n1 = m - l + 1;
    int n2 = r - m;
    ThueXe *t1 = new ThueXe[n1];
    ThueXe *t2 = new ThueXe[n2];
    for (int i = 0; i < n1; i++)
    {
        *(t1 + i) = *(t.p + l + i);
    }
    for (int j = 0; j < n2; j++)
    {
        *(t2 + j) = *(t.p + m + 1 + j);
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (TypeSort((t1 + i)->GetMoney(), (t2 + j)->GetMoney()))
        {
            *(t.p + k) = *(t1 + i);
            i++;
        }
        else
        {
            *(t.p + k) = *(t2 + j);
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        *(t.p + k) = *(t1 + i);
        i++;
        k++;
    }
    while (j < n2)
    {
        *(t.p + k) = *(t2 + j);
        k++;
        j++;
    }
}
void List::MergeSortAdm(List &t, int l, int r, bool (*Type)(int, int))
{
    if (l < r)
    {
        int m = (l + r) / 2;
        MergeSortAdm(t, l, m, Type);
        MergeSortAdm(t, m + 1, r, Type);
        MergeAdm(t, l, m, r, Type);
    }
}
void List::StatisticOfCC()
{
    int cc1 = 0;
    int cc2 = 0;
    int cc3 = 0;
    for (int i = 0; i < this->len; i++)
    {
        if ((*(this->p + i)).Moto.getPhanKhoi() <= 50)
            cc1++;
        if ((*(this->p + i)).Moto.getPhanKhoi() > 50 && (*(this->p + i)).Moto.getPhanKhoi() < 125)
            cc2++;
        if ((*(this->p + i)).Moto.getPhanKhoi() >= 125)
            cc3++;
    }
    char _char = char(179);
    cout << _char << setw(20) << "Duoi 50CC     ";
    cout << _char << setw(11) << cc1 << "         ";
    cout << _char << endl
         << char(195);
    for (int i = 0; i <= 39; i++)
    {
        if (i == 20 || i == 40)
        {
            cout << char(197);
        }
        cout << char(196);
    }
    cout << char(180) << endl;
    _char = char(179);
    cout << _char << setw(20) << "Tu 50CC Den 125CC ";
    cout << _char << setw(11) << cc2 << "         ";
    cout << _char << endl
         << char(195);
    for (int i = 0; i <= 39; i++)
    {
        if (i == 20 || i == 40)
        {
            cout << char(197);
        }
        cout << char(196);
    }
    cout << char(180) << endl;
    _char = char(179);
    cout << _char << setw(20) << "Tren 125CC     ";
    cout << _char << setw(11) << cc3 << "         ";
    cout << _char << endl
         << char(195);
    for (int i = 0; i <= 39; i++)
    {
        if (i == 20 || i == 40)
        {
            cout << char(197);
        }
        cout << char(196);
    }
    cout << char(180) << endl;
}
void List::ShowStatistics()
{
    cout << char(213);
    for (int i = 0; i <= 39; i++)
    {
        if (i == 20 || i == 40)
        {
            cout << char(209);
        }
        cout << char(205);
    }
    cout << char(184) << endl;
    char _char = char(179);
    cout << _char << setw(20) << "PHAN KHOI      ";
    cout << _char << setw(20) << "SO LUONG       ";
    cout << _char << endl;
    cout << char(198);
    for (int i = 0; i <= 39; i++)
    {
        if (i == 20 || i == 40)
        {
            cout << char(216);
        }
        cout << char(205);
    }
    cout << char(181) << endl;
    this->StatisticOfCC();
    cout << char(212);
    for (int i = 0; i <= 39; i++)
    {
        if (i == 20 || i == 40)
        {
            cout << char(207);
        }
        cout << char(205);
    }
    cout << char(190) << endl;
}
