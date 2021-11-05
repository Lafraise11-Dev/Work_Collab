#include <iostream>

using namespace std;

int tong(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i % 4 == 0 && i % 5 != 0)
            sum += i;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Nhap n: "; cin >> n;
    cout << "Tong cac so chia het cho 4 va khong chia het cho 5 nho hon " << n << " la: " << tong(n);
    return 0;
}
