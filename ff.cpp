#include <iostream>
#include <fstream>
#include <iostream>

using namespace std;

/*void ghiSoChan(ofstream &GhiSo)
{
    int dem = 0;
    GhiSo<<"Day so chan tu 1 -> 100 \n";
    for(int a = 1; a <= 100; a++)
	{
		if(a%2 == 0)
		{
                dem ++;
			GhiSo<<a;
			if(dem % 5 == 0)
			    {
                           GhiSo<<"\n";
                            }
			if(dem % 5 != 0)
			    {
                              GhiSo<<"\t";
                            }
		}
	}
    cout<<"\n So Chan: "<<dem;
}

void ghiSoLe(ofstream &GhiSo)
{
    int dem = 0;
    GhiSo<<"\nDay so le tu 1 -> 100 \n";
    for(int i = 1; i <= 100; i++)
	{
		if(i%2 != 0)
		{
                dem ++;
			GhiSo<<i;
			if(dem % 5 == 0)
			    {
                           GhiSo<<"\n";
                            }
			if(dem % 5 != 0)
			    {
                            GhiSo<<"\t";
                            }
		}
	}
    cout<<"\n So Le: "<<dem;
}

int main()
{

    ofstream GhiSo("Ghi So Chan Le.txt");
    ghiSoChan(GhiSo);
    ghiSoLe(GhiSo);
    GhiSo<<"\n ThanhCuong.wordpress.com";
    GhiSo.close();
    system("pause");
    return 0;
}*/
#include <iostream>
using namespace std;

int main() {
    int p= 10;
    int *n;
    n = new int;
    cin >> *n;
    cout << *n<<" "<<p;
    delete n;
    return 0;
}