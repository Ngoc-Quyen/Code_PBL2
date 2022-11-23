


// // #include "List.h"
// // void Menu()
// // {
// //     cout << "\tMENU\n";
// //     cout << "0. Thoat chuong trinh\n";

// //     cout << "5. Them xe vao he thong\n";
// //     cout << "6. Xuat danh sach xe trong he thong\n";
// //     cout << "7. Thue xe\n";
// //     cout << "8. Nhap danh sach xe vao he thong\n";
// //     cout << "9. Nhap danh sach khach thue vao he thong\n";
// //     cout << "10. Danh sach xe chua duoc thue trong he thong\n";
// //     cout << "11. Dang sach xe da thue\n";
// //     cout << "12. Doanh thu cua homestay\n";
// //     cout << "13. Tim kiem xe theo bien so\n";
// //     cout << "14. Tim kiem xe theo phan khoi\n";
// //     cout << "15. Xuat hoa don cua khach theo bien so\n";
// //     cout << "16. Xoa xe trong he thong\n";
// //     cout << "17. Tra Xe\n";
// // }

// // int main()
// // {

// //     int cmt, q;
// //     List t;
// //     do
// //     {
// //         Menu();
// //         cout << "Nhap Lua Chon: ";
// //         cin >> cmt;
// //         switch (cmt)
// //         {

// //         case 5:
// //         {
// //             system("cls");
// //             int n;
// //             cout << "Nhap So Luong Xe Muon Them: ";
// //             cin >> n;
// //             cin.ignore();
// //             if (n < 1)
// //                 break;
// //             for (int i = 0; i < n; i++)
// //             {
// //                 cout << "Nhap Thong Tin Xe " << i + 1 << endl;
// //                 Motobike moto;
// //                 do
// //                 {
// //                     cin >> moto;
// //                 } while (!t.CheckBienso(moto));
// //                 t.Add(moto);
// //             }
// //             system("pause");
// //         }
// //         break;
// //         case 6:
// //         {
// //             system("cls");
// //             t.ShowBike();
// //             system("pause");
// //         }
// //         break;
// //         case 7:

// //         {
// //             system("cls");
// //             t.ShowMotoUser();
// //             t.UpdateRental();
// //             system("pause");
// //         }
// //         break;
// //         case 8:
// //         {
// //             try
// //             {
// //                 t.EnterListMoto();
// //             }
// //             catch (exception &e)
// //             {
// //                 cout << "File Nhap Vao Loi Roi Kia thang n.g.u\n";
// //             }
// //             system("pause");
// //         }
// //         break;
// //         case 9:
// //         {
// //             try
// //             {
// //                 t.EnterListUser();
// //             }
// //             catch (exception &e)
// //             {
// //                 cout << "File Nhap Vao Loi Roi Kia thang n.g.u\n";
// //             }
// //             system("pause");
// //         }
// //         break;
// //         case 10:
// //         {
// //             system("cls");
// //             t.ShowMotoUser();
// //             system("pause");
// //         }
// //         break;
// //         case 11:
// //         {
// //             system("cls");
// //             t.ShowCustomer();
// //             system("pause");
// //         }
// //         break;
// //         case 12:
// //         {
// //             system("cls");
// //             cout << "\tTong Doanh Thu: " << t.SumMoney() << endl;
// //             system("pause");
// //         }
// //         break;
// //         case 13:
// //         {
// //             system("cls");
// //             string bs;
// //             string str;
// //             cout << "Nhap Bien So Xe Can Tim: ";
// //             cin >> bs;
// //             t.FindUser(bs, q);
// //             if (q == 1)
// //             {
// //                 cout << "Ban Co Muon Thue Xe Khong? C/K?\n";
// //                 cout << "Nhap Lua Chon: ";
// //                 cin >> str;
// //                 while (str != "C" && str != "c" && str != "K" && str != "k")
// //                 {
// //                     cout << "Lua Chon Khong Phu Hop! Vui Long Nhap Lai!\n";
// //                     cout << "Nhap Lua Chon: ";
// //                     cin >> str;
// //                 }
// //                 if (str == "c" || str == "C")
// //                 {
// //                     cout << "Chao Mung Ban Den Voi Dich Vu Thue Xe\n";
// //                     t.UpdateRental();
// //                 }
// //             }

// //             system("pause");
// //         }
// //         break;
// //         case 14:
// //         {
// //             system("cls");
// //             int pk;
// //             string str;
// //             cout << "Nhap Phan Khoi Xe Can Tim: ";
// //             cin >> pk;
// //             t.FindUser(pk, q);
// //             if (q == 1)
// //             {
// //                 cout << "Ban Co Muon Thue Xe Khong? C/K?\n";
// //                 cout << "Nhap Lua Chon: ";
// //                 cin >> str;
// //                 while (str != "C" && str != "c" && str != "K" && str != "k")
// //                 {
// //                     cout << "Lua Chon Khong Phu Hop! Vui Long Nhap Lai!\n";
// //                     cout << "Nhap Lua Chon: ";
// //                     cin >> str;
// //                 }
// //                 if (str == "c" || str == "C")
// //                 {
// //                     t.UpdateRental();
// //                 }
// //             }

// //             system("pause");
// //         }
// //         break;
// //         case 15:
// //         {
// //             system("cls");
// //             string str;
// //             cout << "Nhap Bien So Xe Khach Hang Muon In Hoa Don: \n";
// //             cin >> str;
// //             t.BillUser(str, q);
// //             system("pause");
// //         }
// //         break;
// //         case 16:
// //         {
// //             system("cls");
// //             string str;
// //             cout << "Nhap Bien So Xe Muon Xoa: ";
// //             cin >> str;
// //             t.DeleteMoto(str);
// //             system("pause");
// //         }
// //         break;
// //         case 17:
// //         {
// //             system("cls");
// //             int n;
// //             cout << "Nhap So Luong Xe Muon Tra: ";
// //             cin >> n;
// //             t.UpdateAfter(n);
// //             system("pause");
// //         }
// //         break;
// //         default:
// //             break;
// //         }
// //     } while (cmt != 0);
// //     // time_t now = time(0);
// //     // tm *dt = localtime(&now);
// //     // cout << dt->tm_mday << "/" << dt->tm_mon << "/" << dt->tm_year;
// //     return 0;
// // }

// #include "List.h"
// #include <iostream>
// #include <windows.h>
// #include <conio.h>
// using namespace std;

// void set_color(int code)
// {
//     HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
//     SetConsoleTextAttribute(color, code);
// }

// bool ASC(int a, int b)
// {
//     return a < b;
// }
// bool DESC(int a, int b)
// {
//     return a > b;
// }

// void PriceTable()
// {
//     system("cls");
//     cout << "\n\n\t\t\t\t\t\t\t\t\tBANG GIA THUE XE MAY CUA CONG TY HOMESTAY THEO SO PHAN KHOI" << endl;
//     cout << "\n\n";
//     cout << "\t------------------------------------------------------------------------"
//             "----------------------------------------------------------------------------"
//             "-----------------------------";
//     cout << "\t\t\t\t\t   So Phan Khoi\t|\t\t\t   50 (CC)"
//          << "\t\t\t|\t\t   50 < X <= 125 (CC)";
//     cout << "\t\t\t|\t125 < X <= 175 (CC)\n";
//     cout << "\t------------------------------------------------------------------------"
//             "----------------------------------------------------------------------------"
//             "-----------------------------";
//     cout << "\t\t\t\t\t   Gia thue\t|\t\t     60000 (VND/Ngay)"
//          << "\t\t\t|\t\t  80000 - 100000 (VND/Ngay)";
//     cout << "\t\t|\t100000 - 130000 (VND/Ngay)\n";
//     cout << "\t------------------------------------------------------------------------"
//             "----------------------------------------------------------------------------"
//             "-----------------------------\n\n\n\n";
//     cout << endl;
// }

// void QuyDinh()
// {
//     cout << "\n\n\t\t\t\t\t\t\t\t\t\tHOMESTAY Kinh chao quy khach" << endl;
//     cout << endl;
//     cout << "\n\n\t\t\t\t\t\t\t\t\tDUOI DAY LA QUY DINH THUE XE MAY O HOMESTAY" << endl;
//     cout << endl;
//     cout << "\t------------------------------------------------------------------------"
//             "----------------------------------------------------------------------------"
//             "-----------------------------"
//          << endl;
//     cout << "\n\t\t\t\t\t1. Cong ty HOMETAY cho thue xe may theo ngay, va quy khach vui long lua chon truoc so ngay muon thue"
//          << "\n\n\t\t\t\t\t2. Khi tien hanh thue xe, quy khach vui long thanh toan truoc hoa don thue xe" << endl;
//     cout << "\n\t\t\t\t\t3. Xem ki bien so, mau son co trung voi hoa don thue xe hay khong"
//          << "\n\n\t\t\t\t\t4. Kiem tra chat luong xe truoc khi thue" << endl;
//     cout << "\n\t\t\t\t\t5. Khach hang phai mang theo giay to tuy than va ban Photo giay phep lai xe"
//          << "\n\n\t\t\t\t\t6. Moi khach hang chi duoc phep thue 1 xe, va thue toi da trong 30 ngay" << endl;
//     cout << endl;
//     cout << "\t------------------------------------------------------------------------"
//             "----------------------------------------------------------------------------"
//             "-----------------------------"
//          << endl;
//     cout << endl;
//     cout << "\n\n\t\t\t\t\t\t\t\t\t\t   Cam on quy khach!" << endl;
// }

// void MenuUser()
// {
//     cout << "\n\n\t\t\t\t\t\t\t\t\t\tDICH VU CUNG CAP XE MAY DU LICH HOMESTAY" << endl;
//     cout << endl;
//     cout << "\t------------------------------------------------------------------------"
//             "----------------------------------------------------------------------------"
//             "-----------------------------"
//          << endl;
//     cout << "\t\t1. Gia thue xe may o HOMESTAY"
//          << "\t\t\t\t\t\t\t|\t\t\t\t2. Hien Thi tat ca xe chua thue trong he thong" << endl;
//     cout << endl;
//     cout << "\t\t3. Thue Xe"
//          << "\t\t\t\t\t\t\t\t\t|\t\t\t\t4. Tim kiem xe theo bien so" << endl;
//     cout << endl;
//     cout << "\t\t5. Tim kiem xe may theo so phan khoi"
//          << "\t\t\t\t\t\t|\t\t\t\t6. Sap xep gia xe tang dan" << endl;
//     cout << endl;
//     cout << "\t\t7. Sap xep xe theo gia xe giam dan"
//          << "\t\t\t\t\t\t|\t\t\t\t0. Thoat che do User" << endl;
//     cout << "\t------------------------------------------------------------------------"
//             "----------------------------------------------------------------------------"
//             "-----------------------------";
//     cout << endl;
// }

// void MenuAdmin()
// {
//     cout << "\n\n\t\t\t\t\t\t\t\t\t\tTrang quan li danh cho ADMIN" << endl;
//     cout << endl;
//     cout << "\t------------------------------------------------------------------------"
//             "----------------------------------------------------------------------------"
//             "-----------------------------"
//          << endl;
//     cout << "\t\t1. Nhap danh sach xe vao he thong"
//          << "\t\t\t\t\t\t|\t\t2. Nhap danh sach khach thue vao he thong" << endl;
//     cout << endl;
//     cout << "\t\t3. Them xe may moi vao danh sach"
//          << "\t\t\t\t\t\t|\t\t4. Hien Thi tat ca thong tin khach hang da thue xe" << endl;
//     cout << endl;
//     cout << "\t\t5. Tim kiem xe may va xuat thong tin xe may"
//          << "\t\t\t\t\t|\t\t6. Sap xep tang dan theo tien thue xe cua khach hang" << endl;
//     cout << endl;
//     cout << "\t\t7. Hien thi danh sach cac xe chua duoc thue"
//          << "\t\t\t\t\t|\t\t8. Sap xep giam dan theo tien thue xe cua khach hang" << endl;
//     cout << endl;
//     cout << "\t\t9. Tong doanh thu cua cua hang"
//          << "\t\t\t\t\t\t\t|\t\t10. Hien Thi Danh Sach Xe May" << endl;
//     cout << endl;
//     cout << "\t\t11. Cap nhat danh sach sau khi khach hang tra xe"
//          << "\t\t\t\t|\t\t12. Cap nhat gia thue xe" << endl;
//     cout << endl;
//     cout << "\t\t13. Xoa 1 xe khoi he thong"
//          << "\t\t\t\t\t\t\t|\t\t14. Chinh sua ngay thue xe cua khach hang" << endl;
//     cout << endl;
//     cout << "\t\t15. Xuat hoa don cua khach theo bien so"
//          << "\t\t\t\t\t\t|\t\t0. Thoat che do Admin" << endl;
//     cout << endl;
//     cout << "\t------------------------------------------------------------------------"
//             "----------------------------------------------------------------------------"
//             "-----------------------------";
//     cout << endl;
// }

// void Page()
// {
//     system("cls");
//     set_color(2);
//     cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t-------------- PBL2: DU AN CO SO LAP TRINH --------------";
//     cout << "\n\n\n\n\t\t\t\t\t\t\t\tDE TAI : \tQUAN LI CHO THUE XE MAY DU LICH CUA HOMESTAY\n\n"
//          << endl;
//     set_color(3);
//     cout << "\n\n\n\n\t\t\t\t\t|---------------------------------------------------------------------------------------------------------------------|";
//     cout << "\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |";
//     cout << "\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |";
//     cout << "\n\t\t\t\t\t|\t\t\tGiang Vien Huong Dan:\t\t\t\tThS. Do Thi Tuyet Hoa\t\t\t      |";
//     cout << "\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |";
//     cout << "\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |";
//     cout << "\n\t\t\t\t\t|\t\t\tNhom SV Thuc Hien:\t\t\t\tTran Thi Ngoc Quyen\t\t\t      |";
//     cout << "\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |";
//     cout << "\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\tPham Thi Hong Ngan\t\t\t      |";
//     cout << "\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |";
//     cout << "\n\t\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |";
//     cout << "\n\t\t\t\t\t|---------------------------------------------------------------------------------------------------------------------|\n\n\n";
//     cout << endl;
//     system("pause");
//     system("cls");
// }

// int Login()
// {
//     set_color(13);
//     system("cls");
//     cout << "\n\n\n\t\t\t\t\t\t\t\t\tCHAO MUNG BAN DEN VOI DICH VU CUNG CAP XE MAY DU LICH HOMESTAY" << endl;
//     cout << "\n\n";
//     cout << "\t|------------------------------------------------------------------------"
//             "----------------------------------------------------------------------------"
//             "-----------------------------|"
//          << endl;
//     cout << "\t|\t\t\t1. Nguoi Dung"
//          << "\t\t\t|\t\t\t2. Quan Tri Vien";
//     cout << "\t\t\t|\t\t\t 0. Thoat";
//     cout << "\t\t\t  |";
//     cout << endl;
//     cout << "\t|------------------------------------------------------------------------"
//             "----------------------------------------------------------------------------"
//             "-----------------------------|";
//     cout << endl;
//     int lc;
//     do
//     {
//         cout << "\n\n\n\t\t\t\t\tNhap lua chon cua ban: ";
//         cin >> lc;
//     } while (lc < 0 || lc > 2);
//     switch (lc)
//     {
//     case 0:
//         return 3;
//         break;
//     case 1:
//         return 1;
//         break;
//     case 2:
//         return 2;
//         break;
//     }
// }

// void ShowAdmin(List &t)
// {
//     int cmt, q;
//     List tmp;
//     do
//     {
//         set_color(10);
//         MenuAdmin();
//         cout << "\n\t\t\tNhap lua chon cua ban: ";
//         cin >> cmt;
//         switch (cmt)
//         {
//         case 1:
//         {
//             try
//             {
//                 t.EnterListMoto();
//             }
//             catch (exception &e)
//             {
//                 cout << "File Nhap Vao Loi Roi Kia thang n.g.u\n";
//             }
//             system("pause");
//         }
//         break;
//         case 2:
//         {
//             try
//             {
//                 t.EnterListUser();
//             }
//             catch (exception &e)
//             {
//                 cout << "File Nhap Vao Loi Roi Kia thang n.g.u\n";
//             }
//             system("pause");
//         }
//         break;
//         case 3:
//         {
//             system("cls");
//             int n;
//             cout << "Nhap So Luong Xe Muon Them: ";
//             cin >> n;
//             cin.ignore();
//             if (n < 1)
//                 break;
//             for (int i = 0; i < n; i++)
//             {
//                 cout << "Nhap Thong Tin Xe " << i + 1 << endl;
//                 Motobike moto;
//                 do
//                 {
//                     cin >> moto;
//                 } while (!t.CheckBienso(moto));
//                 t.Add(moto);
//             }
//             system("pause");
//         }
//         break;
//         case 4:
//         {
//             system("cls");
//             t.ShowRented();
//             system("pause");
//         }
//         break;
//         case 5:
//         {
//             system("cls");
//             string bs;
//             cout << "Nhap Bien So Xe Can Tim: ";
//             cin >> bs;
//             t.FindUser(bs, q);
//             system("pause");
//         }
//         break;
//         case 6:
//         {
//             system("cls");
//             tmp = t;
//             t.MergeSortAdm(tmp, 0, tmp.getLength() - 1, ASC);
//             tmp.ShowRented();
//             system("pause");
//         }
//         break;
//         case 7:
//         {
//             system("cls");
//             t.ShowMotoUser();
//             system("pause");
//         }
//         break;
//         case 8:
//         {
//             system("cls");
//             tmp = t;
//             t.MergeSortAdm(tmp, 0, tmp.getLength() - 1, DESC);
//             tmp.ShowRented();
//             system("pause");
//         }
//         break;
//         case 9:
//         {
//             set_color(14);
//             system("cls");
//             cout << "\tTong Doanh Thu: " << t.SumMoney() << endl;
//             system("pause");
//         }
//         break;
//         case 10:
//         {
//             set_color(7);
//             system("cls");
//             t.ShowBike();
//             system("pause");
//         }
//         break;
//         case 11:
//         {
//             set_color(11);
//             int n;
//             cout << "\n\t\tNhap so xe can cap nhat la da tra trong he thong: ";
//             cin >> n;
//             t.UpdateAfter(n);
//             system("pause");
//         }
//         break;
//         case 12:
//         {
//             system("cls");
//             set_color(3);
//             t.ShowMotoUser();
//             string str;
//             cout << "\nNhap Bien So Xe: ";
//             cin >> str;
//             t.UpdatePrice(str);
//             system("pause");
//         }
//         break;
//         case 13:
//         {
//             system("cls");
//             string str;
//             cout << "Nhap Bien So Xe Muon Xoa: ";
//             cin >> str;
//             t.DeleteMoto(str);
//             system("pause");
//         }
//         break;
//         case 14:
//         {
//             system("cls");
//             set_color(10);
//             t.ShowRented();
            
//             string bs;
//             cout << "Nhap Bien So Xe: ";
//             cin >> bs;
//             t.UpdateDateRental(bs);
//             system("pause");
//         }
//         break;
//         case 15:
//         {
//             set_color(1);
//             system("cls");
//             string str;
//             cout << "Nhap Bien So Xe Khach Hang Muon Tra Xe Va In Hoa Don: \n";
//             cin >> str;
//             t.BillUser(str, q);
//             if (q != 0) t.UpdateAfter(str);
//             system("pause");
//         }
//         break;
//         case 0:
//             break;
//         default:
//             break;
//         }

//     } while (cmt != 0);
// }

// void ShowUser(List &t)
// {
//     int cmt, q;
//     List tmp;
//     do
//     {
//         set_color(3);
//         system("cls");
//         MenuUser();
//         set_color(7);
//         cout << "\n\t\t\tNhap lua chon cua ban: ";
//         set_color(3);
//         cin >> cmt;
//         switch (cmt)
//         {
//         case 1:
//         {
//             set_color(6);
//             PriceTable();
//             system("pause");
//         }
//         break;
//         case 2:
//         {
//             set_color(7);
//             system("cls");
//             t.ShowMotoUser();
//             system("pause");
//         }
//         break;
//         case 3:
//         {
//             set_color(7);
//             system("cls");
//             t.ShowMotoUser();
//             t.UpdateRental();
//             system("pause");
//         }
//         break;
//         case 4:
//         {
//              system("cls");
//             string bs;
//             string str;
//             cout << "Nhap Bien So Xe Can Tim: ";
//             cin >> bs;
//             t.FindUser(bs, q);
//             if (q == 1)
//             {
//                 cout << "Ban Co Muon Thue Xe Khong? C/K?\n";
//                 cout << "Nhap Lua Chon: ";
//                 cin >> str;
//                 while (str != "C" && str != "c" && str != "K" && str != "k")
//                 {
//                     cout << "Lua Chon Khong Phu Hop! Vui Long Nhap Lai!\n";
//                     cout << "Nhap Lua Chon: ";
//                     cin >> str;
//                 }
//                 if (str == "c" || str == "C")
//                 {
//                     cout << "Chao Mung Ban Den Voi Dich Vu Thue Xe\n";
//                     t.UpdateRental();
//                 }
//             }

//             system("pause");
//         }
//         break;
//         case 5:
//         {
//             system("cls");
//             int pk;
//             string str;
//             cout << "Nhap Phan Khoi Xe Can Tim: ";
//             cin >> pk;
//             t.FindUser(pk, q);
//             if (q == 1)
//             {
//                 cout << "Ban Co Muon Thue Xe Khong? C/K?\n";
//                 cout << "Nhap Lua Chon: ";
//                 cin >> str;
//                 while (str != "C" && str != "c" && str != "K" && str != "k")
//                 {
//                     cout << "Lua Chon Khong Phu Hop! Vui Long Nhap Lai!\n";
//                     cout << "Nhap Lua Chon: ";
//                     cin >> str;
//                 }
//                 if (str == "c" || str == "C")
//                 {
//                     t.UpdateRental();
//                 }
//             }

//             system("pause");
//         }
//         break;
//         case 6:
//         {
//             system("cls");
//             tmp = t;
//             t.MergeSort(tmp, 0, tmp.getLength() - 1, ASC);
//             set_color(7);
//             tmp.ShowMotoUser();
//             system("pause");
//         }
//         break;
//         case 7:
//         {
//             system("cls");
//             tmp = t;
//             t.MergeSort(tmp, 0, tmp.getLength() - 1, DESC);
//             set_color(7);
//             tmp.ShowMotoUser();
//             system("pause");
//         }
//         break;
//         case 0:
//             break;
//         default:
//             break;
//         }
//     }while (cmt != 0);
// }

// int main()
// {
//     Page();
//     List t;
//     int key;
//     do
//     {
//         key = Login();
//         switch (key)
//         {
//         case 1:
//             ShowUser(t);
//             break;
//         case 2:
//             ShowAdmin(t);
//             break;
//         case 3:
//             break;
//         }
//     } while (key != 3);
//     return 0;
// }