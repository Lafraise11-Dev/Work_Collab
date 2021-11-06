#include <iostream>
#include <cmath>
using namespace std;

void tienluong(int n)
{
    int tong = 0;
    for(int i = 1; i <= n; i++)
    {
        tong += pow(2, i - 1);
        cout << "Tien luong ngay thu " << i << " la: " << pow(2,i - 1) << " dong." << endl;
    }
    cout << "Tong tuong luong sau " << n << " ngay lam viec: " << tong << " dong." << endl;
}

int main()
{
    int n;
    do
    {
        cout << "Nhap so ngay lam viec: "; cin >> n;
        if(n < 1)
            cout << "Nhap lai so ngay lam viec.\n";
    } while (n < 1);
    tienluong(n);
    return 0;
    
}

Nhap so ngay lam viec: 5
Tien luong ngay thu 1 la: 1 dong.
Tien luong ngay thu 2 la: 2 dong.
Tien luong ngay thu 3 la: 4 dong.
Tien luong ngay thu 4 la: 8 dong.
Tien luong ngay thu 5 la: 16 dong.
Tong tuong luong sau 5 ngay lam viec: 31 dong.
