// ceiling in sorted array
#include <iostream>
using namespace std;

int search(int *a, int l, int h, int x)
{
    int mid;
    if (x <= a[l])
    {
        return l;
    }
    if (x > a[h])
    {
        return -1;
    }
    mid = (l + h) / 2;
    if (a[mid] == x)
    {
        return mid;
    }
    else if (a[mid] < x)
    {
        if (mid + 1 <= h && x <= a[mid + 1])
        {
            return mid + 1;
        }
        else
        {
            return search(a, mid + 1, h, x);
        }
    }
    else
    {
        if (mid - 1 >= l && x > a[mid - 1])
        {
            return mid - 1;
        }
        else
        {
            return search(a, l, mid - 1, x);
        }
    }
}

int Find_ceiling(int *a, int n, int x)
{
    int ceiling = search(a,0,n-1,x);
    return ceiling;
}

int main()
{
    int a[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 3;
    cout << Find_ceiling(a, n, x);
    return 0;
}