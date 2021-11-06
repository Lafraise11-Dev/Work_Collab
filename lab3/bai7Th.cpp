#include <iostream>
#include <cmath>
using namespace std;

int dem_chu_so(int n)
{
    int dem = 0;
    while(n != 0)
    {
        dem++;
        n /= 10;
    }
    return dem;
}

long long nhiphan(int n)
{
    long long ans = 0;
    int p = 0;
    while(n > 0)
    {
        ans += (n % 2) * pow(10,p);
        ++p;
        n /= 2;
    }
    return ans;
}


int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen n: "; cin >> n;
        if(dem_chu_so(n) > 4)
            cout << "Nhap lai nhe.";
    } while (dem_chu_so(n) > 4);
    cout << nhiphan(n);
}
Nhap so nguyen n: 10
1010
