#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void DocFile() {
    string filename("danhsachnhanvien.txt");
    // Khai báo vector để lưu các dòng đọc được
    vector<string> lines;
    string line;

    //Mở file bằng ifstream
    ifstream input_file(filename);

    //Đọc từng dòng trong
    while (getline(input_file, line)){
        lines.push_back(line);//Lưu từng dòng như một phần tử vào vector lines.
    }

    //Xuất từng dòng từ lines và in ra màn hình
    for (const auto &i : lines)
        cout << i << endl;

    //Đóng file
    input_file.close();
}
