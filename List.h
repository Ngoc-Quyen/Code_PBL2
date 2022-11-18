#include "ThueXe.h"
#include <fstream>
using namespace std;
class List
{
private:
    ThueXe *p;
    int len;

public:
    List();
    List(ThueXe *, int = 0);
    List(const List &);
    ~List();
    List operator=(const List &);
    int getLength();
    void Display();
    void Add(Motobike &); //Them xe vao he thong
    int CheckBienso(Motobike &); 
    bool CheckCmnd(Person &);
    void ShowBike(); //Danh sach xe trong he thong
    void UpdateRental(); //Thue Xe
    int isMaching(string = "", string = "");
    int indexOf(string = "");
    int indexOf(int = 0);
    void EnterListMoto(); //NHap xe vao he thong bang file
    void EnterListUser(); //Nhap khach hang thue bang file
    void ShowMotoUser(); // Danh sach xe chua thue
    void ShowCustomer(); // Danh sach xe da duoc thue
    long long SumMoney();         // Tong doanh thu
    void FindUser(string, int &); // tim kiem xe theo bien so
    void FindUser(int, int &);    // tim kiem xe theo phan khoi
    void BillUser(string, int &);
    void DeleteMoto(string );
    void UpdateAfter(int = 0);
    void Clear(ThueXe&);
    void UpdateDateRental(string);
    void ShowRented();
    void UpdateAfter(string);
    void UpdatePrice(string);
};