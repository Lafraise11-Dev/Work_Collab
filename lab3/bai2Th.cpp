#include <iostream>

using namespace std;

float tong(int n)
{
    float sum = 1;
    for(int i = 2; i <= n; i++)
    {
        float temp = i/(i - 1);
        sum += temp;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Nhap n: "; cin >> n;
    cout << "Ket qua la: " << tong(n);
    return 0;
}
