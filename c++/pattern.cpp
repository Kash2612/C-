#include <bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int p = i;

        for (int j = 1; j <= i; j++)
        {
            cout << p;
            p++;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k;
            k++;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int k = i;
        for (int j = 1; j <= i; j++)
        {
            cout << k;
            k--;
        }
        cout << endl;
    }
}

void pattern6(int n)
{

    for (int i = 1; i <= n; i++)
    {
        char k = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << k;
            k++;
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        char k = 'A' + i;
        for (int j = 0; j < n; j++)
        {
            cout << k;
            k++;
        }
        cout << endl;
    }
}
void pattern8(int n)
{
    for (int i = n; i >= 1; i--)
    {
        char k = 'A' + i - 1;
        for (int j = n; j >= i; j--)
        {
            cout << k;
            k++;
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
// important pattern 12
void pattern12(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            cout << " ";
        }
        int breakpoint = (2 * i + 1) / 2;
        int k = 1;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << k;
            if (j <= breakpoint)
            {
                k++;
            }
            else
            {
                k--;
            }
        }

        for (int j = i; j < n - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            cout << " ";
        }
        int breakpoint = (2 * i + 1) / 2;
        int k = 1 + i;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << k;
            if (j <= breakpoint)
            {
                k++;
            }
            else
            {
                k--;
            }
        }

        for (int j = i; j < n - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

// important pattern 14
void pattern14(int n)
{
    int n1 = (n + 1) / 2;
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 0; j <= n1 - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    int n2 = n1 - 1;
    for (int i = n2; i >= 1; i--)
    {
        for (int j = 0; j <= n2 - i + 1; j++)
        {
            cout << " ";
        }
        for (int j = 2 * i - 1; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        int breakpoint = (2 * i - 1) / 2;
        int k = i;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << k;
            if (j <= breakpoint)
            {
                k--;
            }
            else
            {
                k++;
            }
        }

        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern15(n);

    return 0;
}
