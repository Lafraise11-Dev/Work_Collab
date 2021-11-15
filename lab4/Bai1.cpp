#include <iostream>
#include <cmath>
using namespace std;

void setArray(int a[], int &n)
{
    do
    {
        cout << "Nhap so phan tu trong mang: "; cin >> n;
        if(n < 0)
            cout << "n phai lon hon khong.Xin nhap lai.\n";
    } while (n < 0);
    
    for(int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a[i];
    }
}

void printArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int sumArray(int a[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += i;
    }
    return sum;
}

int findMin(int a[], int n)
{
    int minInArray = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] < minInArray)
            minInArray = a[i];
    }
    return minInArray;
}

//5 dem so nguyen to
int checkPrime(int n)
{
    int check = 1;
    if(n == 1)
        check = 0;
    else if(n == 2 && n != 2)
        check = 0;
    else
    {
        for(int i = 3; i <= n/2; i++)
        {
            if(n % i == 0)
            {
                check = 0;
                break;
            }
        }
    }
    return check;
}

int countNumberofPrime(int a[], int n)
{
    int countPrime = 0;
    for(int i = 0; i < n; i++)
    {
        if(checkPrime(i) == 1) 
            countPrime++;
    }
    return countPrime;
}

int isAscendingOrder(int a[], int n)
{
    int check = 1;
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] > a[i + 1])
        {
            check = 0;
            break;
        }
    }
    return check;

}

int coutnOccurence(int a[], int n, int x)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
            dem++;
    }
    return dem;
}

void deleteItems(int a[], int &n, int x)
{
    int postion = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            postion = i;
            break;
        }
    }
    
    for(int i = postion; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

//luu y ham nay
void deleteItemsFromIndex(int a[], int &n, int index, int no_items)
{
    for(int i = index; i < n - no_items;i++)
    {
        a[i] = a[i + no_items];
        n -= no_items;
    }
}

void concatTwoArrays(int a[], int n, int b[], int m, int c[])
{
    int index = 0;
    for(int i = 0; i < n; i++)
    {
        c[index++] = a[i];
    }

    for(int i = 0; i < m; i++)
    {
        c[index++] = b[i];
    }
}

void concatInterspersedlyTwoArrays(int a[], int n, int b[], int m, int c[])
{
    int index = 0;
    int NumberofElement = m + n;
    int i;
    while(index < NumberofElement)
    {
        if(i < n && i < m)
        {
            c[index++] = a[i];
            c[index++] = b[i];
        }
        else if(i >= n)
        {
            c[index++] = b[i];
        }
        else
        {
            c[index++] = a[i];
        }
        i++;
    }
}
