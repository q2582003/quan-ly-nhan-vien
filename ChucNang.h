#include <iostream>
#include "DocFile.h"

using namespace std;
void ChonChucNang() {
    int n;
        cout << " ||       Chao ban den voi phan mem quan ly nhan vien;"<<endl;
        cout << " ||        Ban muon chon chuc nang gi"<<endl;
        cout <<"======================================================"<<endl;
        cout <<"  ||     1.Mo danh sach nhan vien cua cong ty.    ||"<<endl;
        cout <<"  ||     2.Them nhan vien cua cong ty.            ||"<<endl;
        cout <<"  ||     3.Xoa nhan vien cua cong ty.             ||"<<endl;
        cout <<"  ||     4.Tim kien Nhan vien.                    ||"<<endl;
        cout <<"  ||     5.Cap nhat luong moi nhat.               ||"<<endl;
        cout <<"  ||     6.Thong ke danh sach luong hang thang.   ||"<<endl;
        cout <<"======================================================"<<endl;
    do {
    //system("cls");
        
        cout <<"Ban muon chon chuc nang gi: "<<endl;
        cin >> n;
        switch(n) {
        case 1: 
        {
            cout <<"1.Mo danh sach nhan vien cua cong ty."<<endl;
            DocFile();
            break;
        }
        case 2:
        {
            cout <<"2.Them nhan vien cua cong ty."<<endl;
            break;
        }
        case 3:
        {
            cout <<"3.Xoa nhan vien cua cong ty."<<endl;
            break;
        }
        case 4:
        {
            cout <<"4.Tim kiem nhan vien."<<endl;
            break;
        }
        case 5:
        {
            cout <<"5.Tim kiem nhan vien co so luong lon hon so nhap vao."<<endl;
            break;
        }
        case 6:
        {
            cout <<"6.Cap nhat gia tri luong theo ngay."<<endl;
            break;
        }
        default: 
        {
            cout << "Khong co chuc nang ban chon moi ban chon lai.";
        }
      }
     }while(n != 0);
}