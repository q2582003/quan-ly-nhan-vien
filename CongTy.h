#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

class CongTy {
    //private:
    public:
         int n =1;
         string *HoTen;
         string *MaNhanVien;
         string *ViTri;
         void NhapNhanVien();
         int Luong;
         int *SoNgayLamViec;
};

void CongTy::NhapNhanVien() {
   ofstream DanhSach ("danhsachnhanvien.txt");
   DanhSach << "Danh sach nhan vien cong ty: \n";
   DanhSach << " "<<setw(20)<<"Ma nhan vien ||" <<setw(20)<<"Ho ten"<<setw(20)<<" ||     Chuc vu   "<<setw(20)<<"||  So ngay lam viec ";
   while(1) {
   cout<<"Nhap ma nhan vien thu "<< n++<<" :";
   MaNhanVien = new string;
    getline(cin,*MaNhanVien);
    fflush(stdin);
    
    if(*MaNhanVien == "0") {
        break;
        }
    else {
        //DanhSach <<"Nhan vien thu "<<n<<"\n";
        DanhSach << "\n ";
        DanhSach <<setw(10) << *MaNhanVien <<setw(30);
        cout << "Nhap ten:";
        HoTen = new string;
        getline(cin,*HoTen);
        fflush(stdin);
        //DanhSach <<"\n";
        DanhSach << *HoTen<<setw(18);
        cout << "Vi tri:";
        ViTri = new string;
        getline(cin,*ViTri);
        fflush(stdin);
        //DanhSach <<"\n"; 
        DanhSach << *ViTri;
        //DanhSach <<"\n";
        cout <<"So ngay lam viec: ";
        SoNgayLamViec = new int;
        cin >> *SoNgayLamViec;
        cin.ignore();
        DanhSach << setw(15)<<*SoNgayLamViec<<"\n";
        DanhSach <<"\n";
        delete HoTen;
        delete ViTri;
        delete SoNgayLamViec;
    }
    delete MaNhanVien;
   };
   DanhSach.close();
}
