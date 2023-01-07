#include <iostream>
#include "CongTy.h"

using namespace std;

class GiamDoc :public CongTy {
       void LuongGiamDoc();
};
void GiamDoc::LuongGiamDoc() {
    Luong = 1000000 * SoNgayLamViec;
}