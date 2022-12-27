#include <windows.h>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <limits>
#include "List.h"
using namespace std;

void set_color(int code)
{
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(color, code);
}

bool ASC(int a, int b)
{
    return a < b;
}
bool DESC(int a, int b)
{
    return a > b;
}

void PriceTable()
{
    system("cls");
    cout << "\n\n\t\t\t\t\t\t\t\t\tBANG GIA THUE XE MAY CUA CONG TY HOMESTAY THEO SO PHAN KHOI" << endl;
    cout << "\n\n";
    cout << "------------------------------------------------------------------------"
            "----------------------------------------------------------------------------"
            "-----------------------------";
    cout << "\t\t\t\t\t   So Phan Khoi\t|\t\t\t   50 (CC)"
         << "\t\t\t|\t\t   50 < X <= 125 (CC)";
    cout << "\t\t\t|\t125 < X <= 175 (CC)\n";
    cout << "------------------------------------------------------------------------"
            "----------------------------------------------------------------------------"
            "-----------------------------";
    cout << "\t\t\t\t\t   Gia thue\t|\t\t     80000 (VND/Ngay)"
         << "\t\t\t|\t\t  100000 - 130000 (VND/Ngay)";
    cout << "\t\t|\t130000 - 150000 (VND/Ngay)\n";
    cout << "------------------------------------------------------------------------"
            "----------------------------------------------------------------------------"
            "-----------------------------\n\n\n\n";
    cout << endl;
}
void MenuUser()
{
    cout << "\n\n\t\t\t\t\t\t\t\t\t\tDICH VU CUNG CAP XE MAY DU LICH HOMESTAY" << endl;
    cout << endl;
    cout << "\t------------------------------------------------------------------------"
            "----------------------------------------------------------------------------"
            "-----------------------------"
         << endl;
    cout << "\t\t1. Gia thue xe may o HOMESTAY"
         << "\t\t\t\t\t\t\t|\t\t\t\t2. Hien Thi tat ca xe chua thue trong he thong" << endl;
    cout << endl;
    cout << "\t\t3. Thue Xe"
         << "\t\t\t\t\t\t\t\t\t|\t\t\t\t4. Tim kiem xe theo yeu cau" << endl;
    cout << endl;
    cout << "\t\t5. Sap xep gia xe"
         << "\t\t\t\t\t\t\t\t|\t\t\t\t0. Thoat che do User" << endl;
    cout << endl;
    cout << "\t------------------------------------------------------------------------"
            "----------------------------------------------------------------------------"
            "-----------------------------";
    cout << endl;
}

void MenuAdmin()
{
    cout << "\n\n\t\t\t\t\t\t\t\t\t\tTrang quan li danh cho ADMIN" << endl;
    cout << endl;
    cout << "\t------------------------------------------------------------------------"
            "----------------------------------------------------------------------------"
            "-----------------------------"
         << endl;
    cout << "\t\t1. Nhap danh sach xe vao he thong"
         << "\t\t\t\t\t\t|\t\t2. Nhap danh sach khach thue vao he thong" << endl;
    cout << endl;
    cout << "\t\t3. Them xe may moi vao danh sach"
         << "\t\t\t\t\t\t|\t\t4. Hien Thi " << endl;
    cout << endl;
    cout << "\t\t5. Tim kiem xe may va xuat thong tin xe may"
         << "\t\t\t\t\t|\t\t6. Sap xep theo tien thue xe cua khach hang" << endl;
    cout << endl;
    cout << "\t\t7. Tong doanh thu cua cua hang"
         << "\t\t\t\t\t\t\t|\t\t8. Xoa 1 xe khoi he thong" << endl;
    cout << endl;
    cout << "\t\t9. Cap nhat danh sach sau khi khach hang tra xe"
         << "\t\t\t\t\t|\t\t10. Cap nhat gia thue xe" << endl;
    cout << endl;
    cout << "\t\t11. Chinh sua ngay thue xe cua khach hang"
         << "\t\t\t\t\t|\t\t12. Xuat hoa don cua khach theo bien so" << endl;
    cout << endl;
    cout << "\t\t13. Thong ke so luong xe theo phan khoi"
         << "\t\t\t\t\t\t|\t\t0. Thoat che do Admin\n " << endl;
    cout << endl;
    cout << "\t------------------------------------------------------------------------"
            "----------------------------------------------------------------------------"
            "-----------------------------";
    cout << endl;
}

void Page()
{
    system("cls");
    set_color(2);
    cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t-------------- PBL2: DU AN CO SO LAP TRINH --------------";
    cout << "\n\n\n\n\t\t\t\t\t\t\t\tDE TAI : \tQUAN LI CHO THUE XE MAY DU LICH CUA HOMESTAY\n\n"
         << endl;
    set_color(3);
    cout << "\n\n\n\n\t\t\t\t\t|---------------------------------------------------------------------------------------------------------------------|";
    cout << "\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |";
    cout << "\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |";
    cout << "\n\t\t\t\t\t|\t\t\tGiang Vien Huong Dan:\t\t\t\tThS. Do Thi Tuyet Hoa\t\t\t      |";
    cout << "\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |";
    cout << "\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |";
    cout << "\n\t\t\t\t\t|\t\t\tNhom SV Thuc Hien:\t\t\t\tTran Thi Ngoc Quyen\t\t\t      |";
    cout << "\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |";
    cout << "\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\tPham Thi Hong Ngan\t\t\t      |";
    cout << "\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |";
    cout << "\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |";
    cout << "\n\t\t\t\t\t|---------------------------------------------------------------------------------------------------------------------|\n\n\n";
    cout << endl;
    system("pause");
    system("cls");
}

int Login()
{
    set_color(13);
    system("cls");
    cout << "\n\n\n\t\t\t\t\t\t\t\t\tCHAO MUNG BAN DEN VOI DICH VU CUNG CAP XE MAY DU LICH HOMESTAY" << endl;
    cout << "\n\n";
    cout << "\t|------------------------------------------------------------------------"
            "----------------------------------------------------------------------------"
            "-----------------------------|"
         << endl;
    cout << "\t|\t\t\t1. Nguoi Dung"
         << "\t\t\t|\t\t\t2. Quan Tri Vien";
    cout << "\t\t\t|\t\t\t 0. Thoat";
    cout << "\t\t\t  |";
    cout << endl;
    cout << "\t|------------------------------------------------------------------------"
            "----------------------------------------------------------------------------"
            "-----------------------------|";
    cout << endl;
    int lc;
    do
    {
        while (1)
        {
            try
            {
                cout << "\n\t\t\tNhap lua chon cua ban: ";
                cin >> lc;
                if (!cin)
                    throw string("");
                else
                    break;
            }

            catch (...)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n\t\t\tNhap Sai! Vui Long Nhap Lai!\n";
                continue;
            }
        }
    } while (lc < 0 || lc > 2);
    switch (lc)
    {
    case 0:
        return 3;
        break;
    case 1:
        return 1;
        break;
    case 2:
        return 2;
        break;
    }
}
void ShowAdmin(List &t)
{
    int cmt, q;
    List tmp;

    do
    {
        set_color(10);
        MenuAdmin();
        while (1)
        {
            try
            {
                cout << "\n\t\t\tNhap lua chon cua ban: ";
                cin >> cmt;
                if (!cin)
                    throw string("");
                else
                    break;
            }

            catch (...)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n\t\t\tNhap Sai! Vui Long Nhap Lai!\n";
                continue;
            }
        }
        switch (cmt)
        {
        case 1:
        {
            try
            {
                t.EnterListMoto();
            }
            catch (exception &e)
            {
                cout << "File Nhap Vao Loi Roi Kia thang n.g.u\n";
            }
            system("pause");
        }
        break;
        case 2:
        {
            try
            {
                t.EnterListUser();
            }
            catch (exception &e)
            {
                cout << "File Nhap Vao Loi Roi Kia thang n.g.u\n";
            }
            system("pause");
        }
        break;
        case 3:
        {
            system("cls");
            int n;
            cout << "Nhap So Luong Xe Muon Them: ";
            cin >> n;
            cin.ignore();
            if (n < 1)
                break;
            for (int i = 0; i < n; i++)
            {
                cout << "Nhap Thong Tin Xe " << i + 1 << endl;
                Motobike moto;
                do
                {
                    cin >> moto;
                } while (!t.CheckBienso(moto));
                t.Add(moto);
            }
            t.AddOfFileMotor();
            system("pause");
        }
        break;
        case 4:
        {
            system("cls");
            int cmp;
            cout << "\t\t1. Hien Thi Danh Sach Tat Ca Xe Trong He Thong\n";
            cout << "\t\t2. Hien Thi Danh Sach Xe Chua Duoc Thue\n";
            cout << "\t\t3. Hien Thi Thong Tin Tat Ca Khach Dang Thue Xe\n";
            cout << "\t\t0. Thoat\n";
            while (1)
            {
                try
                {
                    cout << "\n\t\t\tNhap lua chon cua ban: ";
                    cin >> cmp;
                    if (!cin)
                        throw string("");
                    else
                        break;
                }

                catch (...)
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "\n\t\t\tNhap Sai! Vui Long Nhap Lai!\n";
                    continue;
                }
            }
            while (cmp < 0 || cmp > 3)
            {
                cout << "\t\tLua Chon Khong Phu Hop! Vui Long Nhap Lai!\n";
                while (1)
                {
                    try
                    {
                        cout << "\n\t\t\tNhap lua chon cua ban: ";
                        cin >> cmp;
                        if (!cin)
                            throw string("");
                        else
                            break;
                    }

                    catch (...)
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "\n\t\t\tNhap Sai! Vui Long Nhap Lai!\n";
                        continue;
                    }
                }
            }
            switch (cmp)
            {
            case 1:
            {
                set_color(7);
                system("cls");
                t.ShowBike();
                system("pause");
            }
            break;
            case 2:
            {
                system("cls");
                cout << "\t--------Danh Sach Xe Chua Duoc Thue Trong He Thong--------\n";
                t.ShowMotoUser();
                system("pause");
            }
            break;
            case 3:
            {
                system("cls");
                ofstream out; //
                out.open("outfile.txt", ios::out);
                cout << "\t------Thong Tin Cac Khach Hang Dang Thue Xe------\n";
                t.ShowRented();
                t.ShowRentedOfFile(out);
                out.close();
                system("pause");
            }
            break;
            case 0:
                break;
            default:
                break;
            }
        }
        break;
        case 5:
        {
            system("cls");
            string bs;
            cout << "Nhap Bien So Xe Can Tim: ";
            cin >> bs;
            t.FindUser(bs, q);
            system("pause");
        }
        break;
        case 6:
        {
            system("cls");
            int cmp;
            cout << "\t\t1. Sap Xep Tang Dan Theo Tien Thue Cua Khach\n";
            cout << "\t\t2. Sap Xep Giam Dan Theo Tien Thue Cua Khach\n";
            cout << "\t\t0. Thoat\n";
            while (1)
            {
                try
                {
                    cout << "\n\t\t\tNhap lua chon cua ban: ";
                    cin >> cmp;
                    if (!cin)
                        throw string("");
                    else
                        break;
                }

                catch (...)
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "\n\t\t\tNhap Sai! Vui Long Nhap Lai!\n";
                    continue;
                }
            }
            while (cmp < 0 || cmp > 2)
            {
                cout << "\t\tLua Chon Khong Phu Hop! Vui Long Nhap Lai!\n";
                while (1)
                {
                    try
                    {
                        cout << "\n\t\t\tNhap lua chon cua ban: ";
                        cin >> cmp;
                        if (!cin)
                            throw string("");
                        else
                            break;
                    }

                    catch (...)
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "\n\t\t\tNhap Sai! Vui Long Nhap Lai!\n";
                        continue;
                    }
                }
            }
            switch (cmp)
            {
            case 1:
            {
                system("cls");
                tmp = t;
                t.MergeSortAdm(tmp, 0, tmp.getLength() - 1, ASC);
                tmp.ShowRented();
                system("pause");
            }
            break;
            case 2:
            {
                system("cls");
                tmp = t;
                t.MergeSortAdm(tmp, 0, tmp.getLength() - 1, DESC);
                tmp.ShowRented();
                system("pause");
            }
            break;
            case 0:
                break;
            default:
                break;
            }
        }
        break;
        case 7:
        {
            set_color(14);
            system("cls");
            cout << "\tTong Doanh Thu: " << t.SumMoney() << endl;
            system("pause");
        }
        break;
        case 8:
        {
            system("cls");
            string str;
            cout << "Nhap Bien So Xe Muon Xoa: ";
            cin >> str;
            t.DeleteMoto(str);
            t.AddOfFileMotor();
            system("pause");
        }
        break;
        case 9:
        {
            set_color(11);
            int n;
            cout << "\n\t\tNhap so xe can cap nhat la da tra trong he thong: ";
            cin >> n;
            t.UpdateAfter(n);
            system("pause");
        }
        break;
        case 10:
        {
            system("cls");
            set_color(3);
            t.ShowMotoUser();
            string str;
            cout << "\nNhap Bien So Xe: ";
            cin >> str;
            t.UpdatePrice(str);
            t.AddOfFileMotor();
            system("pause");
        }
        break;
        case 11:
        {
            system("cls");
            set_color(10);
            t.ShowRented();

            string bs;
            cout << "Nhap Bien So Xe: ";
            cin >> bs;
            t.UpdateDateRental(bs);
            t.AddOfFileUser();
            t.AddOfFileUser2();
            system("pause");
        }
        break;
        case 12:
        {
            set_color(1);
            system("cls");
            string str;
            cout << "Nhap Bien So Xe Khach Hang Muon Tra Xe Va In Hoa Don: \n";
            cin >> str;
            t.BillUser(str, q);
            if (q != 0)
                t.UpdateAfter(str);
                t.AddOfFileUser();
            system("pause");
        }
        break;
        case 13:
        {
            set_color(2);
            // t.EnterFileMotor();
            system("cls");
            cout << " So Luong Xe Trong He Thong Theo Phan Khoi\n";
            t.ShowStatistics();
            system("pause");
        }
        break;
        case 0:
            break;
        default:
            cout << "Lua Chon Khong Hop Le!\n";
            break;
        }

    } while (cmt != 0);
}

void ShowUser(List &t)
{
    int cmt, q, again = 0;
    List tmp;
    do
    {
        set_color(3);
        system("cls");
        MenuUser();
        set_color(7);
        // cout << "\n\t\t\tNhap lua chon cua ban: ";
        set_color(3);
        while (1)
        {
            try
            {
                cout << "\n\t\t\tNhap lua chon cua ban: ";
                cin >> cmt;
                if (!cin)
                    throw string("");
                else
                    break;
            }

            catch (...)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n\t\t\tNhap Sai! Vui Long Nhap Lai!\n";
                // cout << "\n\t\t\tNhap lua chon cua ban: ";
                // cin >> cmt;
                continue;
                // if(cmt == 'n')
                //     again = 1;
            }
        }

        // cin >> cmt;
        switch (cmt)
        {
        case 1:
        {
            set_color(6);
            PriceTable();
            system("pause");
        }
        break;
        case 2:
        {
            set_color(7);
            system("cls");
            cout << "\t--------Danh Sach Xe Chua Duoc Thue Trong He Thong--------\n";
            t.ShowMotoUser();
            system("pause");
        }
        break;
        case 3:
        {
            set_color(7);
            system("cls");
            t.UpdateRental();
            t.AddOfFileUser();
            t.AddOfFileUser2();
            system("pause");
        }
        break;
        case 4:
        {
            system("cls");
            int cmp;
            cout << "\t\t1. Tim Kiem Xe Theo Bien So\n";
            cout << "\t\t2. Tim Kiem Xe Theo Phan Khoi\n";
            cout << "\t\t0. Thoat\n";
            cout << "\tNhap lua chon: ";
            cin >> cmp;
            while (cmp < 0 || cmp > 3)
            {
                cout << "\tLua Chon Khong Phu Hop! Vui Long Nhap Lai!\n";
                cout << "\tNhap lua chon: ";
                cin >> cmp;
            }
            switch (cmp)
            {
            case 1:
            {
                // system("cls");
                set_color(5);
                string bs;
                string str;
                cout << "Nhap Bien So Xe Can Tim: ";
                cin >> bs;
                t.FindUser(bs, q);
                if (q == 1)
                {
                    cout << "Ban Co Muon Thue Xe Khong? C/K?\n";
                    cout << "Nhap Lua Chon: ";
                    cin >> str;
                    while (str != "C" && str != "c" && str != "K" && str != "k")
                    {
                        cout << "Lua Chon Khong Phu Hop! Vui Long Nhap Lai!\n";
                        cout << "Nhap Lua Chon: ";
                        cin >> str;
                    }
                    if (str == "c" || str == "C")
                    {
                        cout << "Chao Mung Ban Den Voi Dich Vu Thue Xe\n";
                        t.UpdateRental();
                    }
                }

                system("pause");
            }
            break;
            case 2:
            {
                // system("cls");
                set_color(6);
                int pk;
                string str;
                cout << "Nhap Phan Khoi Xe Can Tim: ";
                cin >> pk;
                t.FindUser(pk, q);
                if (q == 1)
                {
                    cout << "Ban Co Muon Thue Xe Khong? C/K?\n";
                    cout << "Nhap Lua Chon: ";
                    cin >> str;
                    while (str != "C" && str != "c" && str != "K" && str != "k")
                    {
                        cout << "Lua Chon Khong Phu Hop! Vui Long Nhap Lai!\n";
                        cout << "Nhap Lua Chon: ";
                        cin >> str;
                    }
                    if (str == "c" || str == "C")
                    {
                        t.UpdateRental();
                    }
                }

                system("pause");
            }
            break;
            case 0:
                break;
            default:
                break;
            }
        }
        break;
        case 5:
        {
            system("cls");
            int cmp;
            cout << "\t\t1. Sap Xep Theo Gia Xe Tang Dan\n";
            cout << "\t\t2. Sap Xep Theo Gia Xe Giam Dan\n";
            cout << "\t\t0. Thoat\n";
            while (1)
            {
                try
                {
                    cout << "\n\t\t\tNhap lua chon cua ban: ";
                    cin >> cmp;
                    if (!cin)
                        throw string("");
                    else
                        break;
                }

                catch (...)
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "\n\t\t\tNhap Sai! Vui Long Nhap Lai!\n";
                    // cout << "\n\t\t\tNhap lua chon cua ban: ";
                    // cin >> cmt;
                    continue;
                    // if(cmt == 'n')
                    //     again = 1;
                }
            }
            while (cmp < 0 || cmp > 2)
            {
                cout << "\tLua Chon Khong Phu Hop! Vui Long Nhap Lai!\n";
                while (1)
                {
                    try
                    {
                        cout << "\n\t\t\tNhap lua chon cua ban: ";
                        cin >> cmt;
                        if (!cin)
                            throw string("");
                        else
                            break;
                    }

                    catch (...)
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "\n\t\t\tNhap Sai! Vui Long Nhap Lai!\n";
                        // cout << "\n\t\t\tNhap lua chon cua ban: ";
                        // cin >> cmt;
                        continue;
                        // if(cmt == 'n')
                        //     again = 1;
                    }
                }
            }
            switch (cmp)
            {
            case 1:
            {
                system("cls");
                set_color(7);
                tmp = t;
                t.MergeSort(tmp, 0, tmp.getLength() - 1, ASC);
                set_color(7);
                tmp.ShowMotoUser();
                system("pause");
            }
            break;
            case 2:
            {
                system("cls");
                tmp = t;
                t.MergeSort(tmp, 0, tmp.getLength() - 1, DESC);
                set_color(7);
                tmp.ShowMotoUser();
                system("pause");
            }
            break;
            case 0:
                break;
            default:
                break;
            }
        }
        break;
        case 0:
            break;
        default:
            break;
        }
    } while (cmt != 0);
}

int main()
{
    Page();
    List t;
    int key;
    do
    {
        key = Login();
        switch (key)
        {
        case 1:
            ShowUser(t);
            break;
        case 2:
            ShowAdmin(t);
            break;
        case 3:
            break;
        }
    } while (key != 3);
    return 0;
    // out.close();
}