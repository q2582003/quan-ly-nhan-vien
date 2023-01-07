#include <iostream>
#include <fstream>
#include <iomanip>
#include "CongTy.h"

using namespace std;
//Nhập và in ra danh sách nhân viên công ty và file Danhsachnhanvien.txt
int main() {
    int n =1;
   string HoTen;
   string MaNhanVien;
   string ViTri;
   //int Luong;
   ofstream DanhSach ("danhsachnhanvien.txt");
   DanhSach << "Danh sach nhan vien cong ty: \n";
   DanhSach << " "<<setw(20)<<"Ma nhan vien ||" <<setw(20)<<"Ho ten"<<setw(20)<<" ||  Chuc vu   ";
   while(1) {
   cout<<"Nhap ma nhan vien thu "<< n++<<" :";
    getline(cin,MaNhanVien);
    fflush(stdin);
    if(MaNhanVien == "0") {
        break;
        }
    else {
        //DanhSach <<"Nhan vien thu "<<n<<"\n";
        DanhSach << "\n ";
        DanhSach <<setw(10) << MaNhanVien <<setw(25);
        cout << "Nhap ten:";
        getline(cin,HoTen);
        fflush(stdin);
        //DanhSach <<"\n";
        DanhSach << HoTen<<setw(17);
        cout << "Vi tri:";
        getline(cin,ViTri);
        fflush(stdin);
        //DanhSach <<"\n";
        DanhSach << ViTri <<"\n";
        //DanhSach <<"\n";
        //cin >> Luong;
        //DanhSach << Luong;
        //DanhSach <<"\n"
    }
   };
   DanhSach.close();
   return 0;
}