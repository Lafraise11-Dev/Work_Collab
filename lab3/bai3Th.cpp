#include <iostream>

using namespace std;

int factorial(int n)
{
    int temp = 1;
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        temp *= i;
        ans += temp;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Nhap n: "; cin >> n;
    cout << "Ket qua la: " << factorial(n);
    return 0;
}
