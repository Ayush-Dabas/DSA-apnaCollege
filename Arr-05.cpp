//chocolate distribution problem
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

void solution(int *a, int n, int m)
{
    int minDiff = INT_MAX;
    sort(a,a+n);
    for(int i=0 ; i < n-m + 1 ; i++)
    {
        minDiff = min(minDiff,a[m+i-1]-a[i]);
    }
    cout << "Min difference : " << minDiff << endl;
}

int main()
{
    // int a[] = {7,3,2,4,9,12,56};
    // int a[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int a[] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50};
    int n = sizeof(a)/sizeof(a[0]);
    int m = 7;
    solution(a,n,m);
    return 0;
}