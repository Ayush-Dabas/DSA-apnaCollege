// find in rotated array
#include <iostream>

using namespace std;

int pivot(int *a, int n)
{
    if (n == 1)
    {
        return 0;
    }
    int l = 0, h = n - 1;
    while (l < h)
    {
        int mid = (l + h) / 2;
        if (a[mid] < a[mid - 1] && a[mid] < a[mid + 1])
        {
            return mid;
        }
        else if (a[mid] > a[mid - 1] && a[mid] < a[mid + 1])
        {
            h--;
        }
        else
        {
            l++;
        }
    }
    return -1;
}

int binarySearch(int *a, int l, int h, int target)
{
    int mid = (l + h) / 2;
    if (a[mid] == target)
    {
        return mid;
    }
    else if (a[mid] < target)
    {
        return binarySearch(a, mid + 1, h, target);
    }
    else
    {
        return binarySearch(a, l, mid - 1, target);
    }
    return -1;
}

int search(int *a, int n, int target)
{
    int pivotElement = pivot(a, n);
    int l = 0, h = pivotElement - 1;
    int b = pivotElement, c = n - 1;
    int ans = binarySearch(a, l, h, target);
    int ans2 = binarySearch(a, b, c, target);
    if (ans != -1)
    {
        return ans;
    }
    return ans2;
}

int main()
{
    int a[] = {4, 5, 6, 7, 0, 1, 2};
    // int a[] = {1};
    int n = sizeof(a) / sizeof(a[0]);
    int target = 0;
    // cout << pivot(a,n) << endl;
    cout << search(a,n,target);

    return 0;
}