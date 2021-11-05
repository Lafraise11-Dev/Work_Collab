#include <iostream>
using namespace std;

void liet_ke(int n, int &dem, int &tong_uoc)
{
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << i << " ";
            dem++;
            tong_uoc += i;
        }
    }
}

int main()
{
    int n,dem = 0,tong_uoc = 0;
    cout << "Nhap so nguyen duong n: "; cin >> n;
    cout << "Cac uoc nguyen duong cua n la: "; liet_ke(n,dem,tong_uoc);
    cout << "\nCo " << dem << " uoc so nguyen duong.";
    cout << "\nTong cac uoc nguyen duong la: " << tong_uoc;
    return 0;
}
