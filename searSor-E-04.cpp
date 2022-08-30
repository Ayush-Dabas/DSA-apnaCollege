// searching in array with adjacent differ by k
#include <iostream>
using namespace std;

int search(int *a, int n, int k, int target)
{
    int i = 0;
    // int temp = target - a[0];
    // temp /= k;
    while (i < n)
    {
        if (a[i] == target)
        {
            return i + 1;
        }
        i = i + max(1, abs(a[i] - target) / k);
    }
    return -1;
}

int main()
{
    int a[] = {2,4,5,7,7,6};
    int n = sizeof(a)/sizeof(a[0]);
    cout << search(a,n,2,6);
    return 0;
}