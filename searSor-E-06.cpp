// find pair with given difference
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

// int binarySearch(int *a, int l, int h, int target)
// {
//     int mid = (l + h) / 2;
//     while (l <= h)
//     {
//         if (a[mid] == target)
//         {
//             return mid;
//         }
//         else if (a[mid] < target)
//         {
//             l = mid + 1;
//         }
//         else
//         {
//             h = mid - 1;
//         }
//     }
//     return -1;
// }

bool findPair(int *a, int n, int diff)
{
    // sort(a, a + n);
    // // int p1, p2;
    // for (int i = 0; i < n; i++)
    // {
    //     // int ind = binarySearch(a,0,n-1,abs(diff-a[i]));
    //     // if(ind!=-1){
    //     //     cout << "pairs are : " << a[i] << " ans " << a[ind] << endl;
    //     //     return;
    //     // }
    //     // else
    //     // {
    //     //     continue;
    //     // }
    // }
    // cout << "No pairs found !\n";
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
        if (n == 0 && mp[a[i]] > 1)
        {
            return true;
        }
    }
    if (n == 0)
    {
        return false;
    }
    for(int i=0 ; i<n ; i++)
    {
        if(mp.find(diff+a[i])!=mp.end()){
            cout << "Pair found : (" << a[i] <<", " <<diff+a[i]<<")\n";
            return true;
        }
    }
    cout <<"NO PAIR FOUND !\n";
    return false;
}

int main()
{
    int arr[] = { 1, 8, 30, 40, 100 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = -60;
    findPair(arr, size, n);
    return 0;
}