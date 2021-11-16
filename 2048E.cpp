#include <iostream>
using namespace std;

int main() 
{
    int b0, b1, b2, b3, b4, b5, b6, b7, b8;
    char button;

    cin >> b0 >> b1 >> b2 >> b3 >> b4 >> b5 >> b6 >> b7 >> b8;
    cin >> button;

    cout << "Grid:\n";
    if (!b0) cout << "_ ";
    else cout << b0 << " ";
    if (!b1) cout << "_ ";
    else cout << b1 << " ";
    if (!b2) cout << "_ " << endl;
    else cout << b2 << " " << endl;
    if (!b3) cout << "_ ";
    else cout << b3 << " ";
    if (!b4) cout << "_ ";
    else cout << b4 << " ";
    if (!b5) cout << "_ " << endl;
    else cout << b5 << " " << endl;
    if (!b6) cout << "_ ";
    else cout << b6 << " ";
    if (!b7) cout << "_ ";
    else cout << b7 << " ";
    if (!b8) cout << "_ " << endl;
    else cout << b8 << " " << endl;

    int tmp = 0;
    if (button == 'a')
    {
        if (b1 && !b0) swap(b1, b0);
        if (b2 && !b0) swap(b0, b2);
        if (b2 && !b1) swap(b1, b2);
        if (b1 == b0)
        {
            b0 += b1;
            b1 = 0;
            tmp++;
        }
        if (b1 == b2 && !tmp)
        {
            b1 += b2;
            b2 = 0;
        }
        tmp = 0;
        if (b4 && !b3) swap(b3, b4);
        if (b5 && !b3) swap(b3, b5);
        if (b5 && !b4) swap(b5, b4);
        if (b3 == b4)
        {
            b3 += b4;
            b4 = 0;
            tmp++;
        }
        if (b5 == b4 && !tmp)
        {
            b4 += b5;
            b5 = 0;
        }
        tmp = 0;
        if (b7 && !b6) swap(b6, b7);
        if (b8 && !b6) swap(b6, b8);
        if (b8 && !b7) swap(b7, b8);
        if (b6 == b7)
        {
            b6 += b7;
            b7 = 0;
            tmp++;
        }
        if (b7 == b8 && !tmp)
        {
            b7 += b8;
            b8 = 0;
        }
    }
    else
    {
        tmp = 0;
        if (b1 && !b2) swap(b1, b2);
        if (b0 && !b1) swap(b0, b1);
        if (b0 && !b2) swap(b0, b2);
        if (b1 == b2)
        {
            b2 += b1;
            b1 = 0;
            tmp++;
        }
        if (b1 == b0 && !tmp)
        {
            b1 += b0;
            b0 = 0;
        }
        tmp = 0;
        if (b4 && !b5) swap(b5, b4);
        if (b3 && !b5) swap(b3, b5);
        if (b3 && !b4) swap(b3, b4);
        if (b4 == b5)
        {
            b5 += b4;
            b4 = 0;
            tmp++;
        }
        if (b4 == b3 && !tmp)
        {
            b4 += b3;
            b3 = 0;
        }
        tmp = 0;
        if (b7 && !b8) swap(b8, b7);
        if (b6 && !b8) swap(b6, b8);
        if (b6 && !b7) swap(b7, b6);
        if (b8 == b7)
        {
            b8 += b7;
            b7 = 0;
            tmp++;
        }
        if (b7 == b6 && !tmp)
        {
            b7 += b6;
            b6 = 0;
        }
    }

    cout << "Next move:\n";
    if (button == 'a')
    {
        if (b1 && !b0) swap(b1, b0);
        if (b2 && !b0) swap(b2, b0);
        if (b2 && !b1) swap(b2, b1);
        if (b4 && !b3) swap(b3, b4);
        if (b5 && !b3) swap(b5, b3);
        if (b5 && !b4) swap(b5, b4);
        if (b7 && !b6) swap(b6, b7);
        if (b8 && !b6) swap(b8, b6);
        if (b8 && !b7) swap(b8, b7);
    }
    else
    {
        if (b1 && !b2) swap(b1, b2);
        if (b0 && !b2) swap(b0, b2);
        if (b0 && !b1) swap(b0, b1);
        if (b4 && !b5) swap(b5, b4);
        if (b3 && !b5) swap(b3, b5);
        if (b3 && !b4) swap(b3, b4);
        if (b7 && !b8) swap(b8, b7);
        if (b6 && !b8) swap(b6, b8);
        if (b6 && !b7) swap(b6, b7);
    }

    if (!b0) cout << "_ ";
    else cout << b0 << " ";
    if (!b1) cout << "_ ";
    else cout << b1 << " ";
    if (!b2) cout << "_ " << endl;
    else cout << b2 << " " << endl;
    if (!b3) cout << "_ ";
    else cout << b3 << " ";
    if (!b4) cout << "_ ";
    else cout << b4 << " ";
    if (!b5) cout << "_ " << endl;
    else cout << b5 << " " << endl;
    if (!b6) cout << "_ ";
    else cout << b6 << " ";
    if (!b7) cout << "_ ";
    else cout << b7 << " ";
    if (!b8) cout << "_ " << endl;
    else cout << b8 << " " << endl;

    return 0;
}