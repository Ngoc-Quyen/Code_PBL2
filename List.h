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
    void Add(Motobike &); //Them xe vao he thong
    int CheckBienso(Motobike &); 
    bool CheckCmnd(Person &);
    void ShowBike(); //Danh sach xe trong he thong
    void UpdateRental(); //Thue Xe
    int isMaching(string = "", string = ""); //tim kiem 1 phan string
    int indexOf(string = ""); //ham con tim kiem theo bien so
    int indexOf(int = 0); //ham con tim kiem theo phan khoi
    void EnterListMoto(); //NHap xe vao he thong bang file
    void EnterListUser(); //Nhap khach hang thue bang file
    void ShowMotoUser(); // Danh sach xe chua thue
    void ShowCustomer(); // Danh sach xe dang thue
    long long SumMoney();         // Tong doanh thu
    void FindUser(string, int &); // tim kiem xe theo bien so
    void FindUser(int, int &);    // tim kiem xe theo phan khoi
    void BillUser(string, int &);
    void DeleteMoto(string ); //xoa xe ra khoi he thong
    void UpdateAfter(int = 0); // tra xe theo so luong
    void Clear(ThueXe&); //tra xe
    void UpdateDateRental(string); //cap nhat ngay thue cua khach
    void ShowRented(); //Thong Tin cac khach hang dang thue
    void UpdateAfter(string); //tra 1 xe
    void UpdatePrice(string); //cap nhat gia thue 
    //sap xep
    void Merge(List&, int, int, int, bool(*) (int, int));
    void MergeSort(List&, int, int, bool(*) (int, int));
    void MergeAdm(List&, int, int, int,  bool(*) (int, int));
    void MergeSortAdm(List&, int, int, bool(*) (int, int));
    void StatisticOfCC(); //thong ke theo phan khoi
    void ShowStatistics();
    void ShowRentedOfFile(ofstream&);//Danh sach xe dang thue ra file
    void AddOfFileMotor();
    void AddOfFileUser();
    void AddOfFileUser2();
};