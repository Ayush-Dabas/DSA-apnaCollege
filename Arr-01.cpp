// maximum and minimum of an array using minimum number of comparisions
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

// using bakchodi
// struct pair
// {
//     int min;
//     int max;
// };

void findMinMax(int *a, int n)
{
    int minEl = INT_MAX;
    int maxEl = INT_MIN;
    for(int i=0 ; i < n ; i++)
    {
        minEl = min(minEl,a[i]);
        maxEl = max(maxEl,a[i]);
    }
    cout << "Maximum Element of array is : " << maxEl << endl;
    cout << "Minimum ELement of array is : " << minEl << endl;
}

int main()
{
    int a[] = {4, 1, 5, 7, 234, 1, 68, 0};
    int n = sizeof(a)/sizeof(a[0]);
    findMinMax(a,n);
    return 0;
}