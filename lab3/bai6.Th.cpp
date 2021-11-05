#include <iostream>
using namespace std;

int uscln(int a, int b)
{
    int uoc = 1;
    if(a * b == 0)  return 1;
    while(a!= b)
    {
        if(a > b)   
            a-=b;
        else    
            b -= a;
    }
    return a;
}
// cau giua t lam lai sau

int bcnn(int a, int b)
{
    int temp = uscln(a,b);
    int boichung = (a * b)/temp;
    return boichung;
}
int main()
{
    int a,b;
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;
    cout << "Uoc so chung lon nhat cua a va b la: " << uscln(a,b);
    cout << "\nBoi chung nho nhat: " << bcnn(a,b);
    return 1;
}
