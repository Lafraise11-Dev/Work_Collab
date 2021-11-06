#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, dem = 0;
    cout << "Nhap do cao tam giac: "; cin >> n;
    while(n > 0)
    {
        for(int i = 1; i < n; i++)
            cout << " ";
        for(int k = 0; k <= dem; k++)
            cout << "*";
        for(int k = 0; k < dem; k++)
            cout << "*";
        n--;
        dem++;
        cout << "\n";
    }
    return 0;
}

Nhap do cao tam giac: 10
         *   
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************
