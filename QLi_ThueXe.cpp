
#include "List.h"
void Menu()
{
    cout << "\tMENU\n";
    cout << "0. Thoat chuong trinh\n";

    cout << "5. Them xe vao he thong\n";
    cout << "6. Xuat danh sach xe trong he thong\n";
    cout << "7. Thue xe\n";
    cout << "8. Nhap danh sach xe vao he thong\n";
    cout << "9. Nhap danh sach khach thue vao he thong\n";
    cout << "10. Danh sach xe chua duoc thue trong he thong\n";
    cout << "11. Dang sach xe da thue\n";
    cout << "12. Doanh thu cua homestay\n";
    cout << "13. Tim kiem xe theo bien so\n";
    cout << "14. Tim kiem xe theo phan khoi\n";
    cout << "15. Xuat hoa don cua khach theo bien so\n";
    cout << "16. Xoa xe trong he thong\n";
    cout << "17. Tra Xe\n";

}

int main()
{

    int cmt, q;
    List t;
    do
    {
        Menu();
        cout << "Nhap Lua Chon: ";
        cin >> cmt;
        switch (cmt)
        {

        case 5:
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
            system("pause");
        }
        break;
        case 6:
        {
            system("cls");
            t.ShowBike();
            system("pause");
        }
        break;
        case 7:

        {
            system("cls");
            t.ShowMotoUser();
            t.UpdateRental();
            system("pause");
        }
        break;
        case 8:
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
        case 9:
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
        case 10:
        {
            system("cls");
            t.ShowMotoUser();
            system("pause");
        }
        break;
        case 11:
        {
            system("cls");
            t.ShowCustomer();
            system("pause");
        }
        break;
        case 12:
        {
            system("cls");
            cout << "\tTong Doanh Thu: " << t.SumMoney() << endl;

            system("pause");
        }
        break;
        case 13:
        {
            system("cls");
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
        case 14:
        {
            system("cls");
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
        case 15:
        {
            system("cls");
            string str;
            cout << "Nhap Bien So Xe Khach Hang Muon In Hoa Don: \n";
            cin >> str;
            t.BillUser(str, q);
            system("pause");
        }
        break;
        case 16:
        {
            system("cls");
            string str;
            cout << "Nhap Bien So Xe Muon Xoa: ";
            cin >> str;
            t.DeleteMoto(str);
            system("pause");

        }
        break;
        case 17:
        {
            system("cls");
            int n;
            cout << "Nhap So Luong Xe Muon Tra: ";
            cin >> n;
            t.UpdateAfter(n);
            system("pause");
        }   

        
        break;
        }
    } while (cmt != 0);
    // time_t now = time(0);
    // tm *dt = localtime(&now);
    // cout << dt->tm_mday << "/" << dt->tm_mon << "/" << dt->tm_year;
    return 0;
}
