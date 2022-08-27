// kadane algorithm
#include <iostream>
#include <algorithm>
using namespace std;

int kadanes(int *a, int n)
{
    int sum = 0;
    int temp = 0;
    for(int i=0 ; i<n ; i++)
    {
        temp = max(temp+a[i],a[i]);
        sum = max(temp,sum);
    }
    return sum;
}

int main()
{
    // int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int a[] = {5,4,-1,7,8};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "kadane ka jaadu : " << kadanes(a,n) << endl;

    return 0;
}