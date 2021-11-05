#include <iostream>
using namespace std;

int kiem_tra_nguyen_to(int n)
{
    if(n == 1 || n == 2)
        return 1;
    else if(n % 2 == 0)
        return 0;
    else
    {
        for(int i = 3; i < n; i++)
        {
            if(n % i == 0)
                return 0;
        }
    }
    return 1;
}

int max_nguyento(int n)
{
    int number = 0;
    for(int i = 1; i < n; i++)
    {
        if(kiem_tra_nguyen_to(i) == 1)
            number = i;
    }
    return number;
}

int main()
{
    int n;
    do
    {
        cout << "Nhap n: "; cin >> n;
        if(n < 0 || n >= 50)
            cout << "n phai trong doan 0 den 50. Xin nhap lai.";
    } while (n < 0 || n >= 50);
    cout << "So nguyen to nho nhat nho hon " << n << " la: " << max_nguyento(n);
    return 0;
    
}
