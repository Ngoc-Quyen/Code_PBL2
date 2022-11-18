#include "List.h"
#include <iostream>
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
void List::Display()
{
    if (this->len == 0)
    {
        cout << "\tKhong Co Xe Trong He Thong! Vui Long Kiem Tra Lai!\n";
    }
    else
    {
        cout << "\tDanh Sach Xe Trong He Thong\n";
        for (int i = 0; i < this->len; i++)
        {
            cout << "Motobike " << i + 1 << endl;
            (*(this->p + i)).Show();
        }
    }
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
        for (int i = 0; i < this->len; i++)
        {
            cout << "Motobike " << i + 1 << ":\n";
            (*(p + i)).Moto.Show();
        }
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
    cout << "---------------------------------------\n";
    cout << "Chao Mung Ban Den Voi Dich Vu Thue Xe\n";
    cout << "\tMotobike 1: \n";
    string bs;
    cout << "Nhap bien so xe muon thue: ";
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
            cout << "Nhap so ngay muon thue: ";
            cin >> (this->p + k)->Number;
            (*(this->p + k)).Moto.setIsRend(1);
            system("cls");

            (this->p + k)->ShowTT();
        }
        else
        {
            Person p;
            (this->p + k)->Per = p;
            cout << "\tBan dang thue mot xe khac trong he thong\n";
        }
    }
    else
    {
        do
        {
            cout << "\tXe da duoc nguoi khac thue hoac khong co trong he thong\n";
            cmp = 1;
            cout << "Ban co muon thue xe khac khong? y/n\n";
            char ch;
            cout << "Nhap lua chon: ";
            cin >> ch;
            if (ch == 'n')
            {
                cout << "Cam on quy khach\n";
                cmp = 0;
            }

            else
            {

                cout << "\tMotobike 1: \n";
                string bs;
                cout << "Nhap bien so xe muon thue: ";
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
                        cout << "Nhap so ngay muon thue: ";
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
                        cout << "\tBan dang thue mot xe khac trong he thong\n";
                    }
                }
            }
        } while (cmp);
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
    in.open("ListMotor.txt");
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
    in.close();
    system("cls");
    cout << "\t---Upload from file Motorbike---\n";
}
void List::EnterListUser()
{
    ifstream in;
    in.open("ListUser.txt");
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
    in.close();
    system("cls");
    cout << "\t---Uploat from file Person---\n";
}
void List::ShowMotoUser()
{
    if (this->len == 0)
    {
        cout << "Khong  co xe trong he thong\n";
    }
    else
    {
        cout << "------Danh sach xe chua thue trong he thong------\n";
        int j = 1;
        for (int i = 0; i < this->len; i++)
        {
            if (!(*(this->p + i)).Moto.getIsRend())
            {
                cout << "Motobike " << j << ":" << endl;
                (*(this->p + i)).Moto.Show();
                j++;
            }
        }
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
    long long sum = 0;

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
            (*(this->p + k)).Moto.Show();
        }
        if (q == 0)
            cout << "Xe Da Duoc Thue! Quy Khach Vui Long Chon Xe Khac\n";
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
                cout << "Thong Tin Motobike " << i + 1 << endl;
                (*(this->p + i)).Moto.Show();
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
            cout << "Xe Da Duoc Thue!\n";
    }
    else
        cout << "Khong Co Xe He Thong! Vui Long Kiem Tra Lai!\n";
}
void List::UpdateAfter(int n)
{
    if (n < 0)
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
        cout << "Khong Co Xe Nao Trong Danh Sach\n";
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
}
void List::ShowRented()
{
    if (this->len == 0)
    {
        cout << "\tKhong Co Xe Nao Trong He Thong\n";
    }
    else
    {
        cout << "\tDanh Sach Xe Va Tinh Trang Trong He Thong\n";
        int j = 1;
        for (int i = 0; i < this->len; i++)
        {
            if ((*(this->p + i)).Moto.getIsRend())
            {
                cout << "Customer " << j << endl;
                (*(this->p + i)).Show();
                j++;
            }
        }
        if (j == 1) 
        {
            cout << "\tChua Co Khach Thue\n";
        }
    }
}
void List::UpdatePrice(string bienso)
{
    int n;
    int k = indexOf(bienso);
    cout << "Nhap Gia Xe Muon Cap Nhat: ";
    cin >> n;
    (this->p + k)->Moto.setGia(n);
    cout << "\n------Cap Nhat Thanh Cong------\n";
}