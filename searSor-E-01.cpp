// permute two arrays such that sum of every pair >= k
#include <iostream>
#include <algorithm>
using namespace std;

bool func(int *a, int *b, int n, int k)
{
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (a[i] + b[i] < k)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a[] = {2, 1, 3};
    int b[] = {7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);
    cout << func(a, b, n, 10) << endl;

    return 0;
}