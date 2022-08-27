// if any value of integer appears twice then return true
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool func(int *a, int n)
{
    // sort karke kaam khatama karu ??
    // sort(a, a + n);
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (a[i] == a[i + 1])
    //     {
    //         return true;
    //     }
    // }
    // return false;

    // mapping ?? fayda-> o(n) me ho jaaega lekin space complexity bhi o(n)
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    for (auto i : mp)
    {
        if (i.second >= 2)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int a[] = {1, 1, 23, 5, 30, 67, 9, 8};
    int n = sizeof(a) / sizeof(a[0]);

    cout << func(a, n) << endl;

    return 0;
}