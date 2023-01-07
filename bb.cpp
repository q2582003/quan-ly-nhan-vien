#include <iostream> 
#include <fstream> 
#include <iostream> 
using namespace std;

int main()
{
    int n;
    string name;
    
    ofstream SoChan ("So Chan.txt");
    SoChan<<"Day so chan tu 1 -> 10 \n";
    getline(cin,name);fflush(stdin);
    SoChan << name;
    SoChan << "Nhap n:";
    cin >> n;
    SoChan <<n;
    SoChan <<"\n";
    SoChan.close();
    return 0;
}