#include <bits/stdc++.h>
using namespace std;

int binary_search(int ele, int a[], int low, int high)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == ele)
        {
            return mid;
        }
        else if (ele > a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        
    }
    return -1;
}

int main()
{
    int ele;
    cout << "enter element to be searched: ";
    cin >> ele;
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int a[n];
    cout << "enter array's elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int low = 0;
    int high = n - 1;
    int x = binary_search(ele, a, low, high);
    if (x == -1)
    {
        cout << ele << " is not present";
    }
    else
    {
        cout << ele << " is present at index " << x;
    }

    return 0;
}