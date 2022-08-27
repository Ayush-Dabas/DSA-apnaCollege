// reverse the array
#include <iostream>
#include <algorithm>

using namespace std;

// printing the array
void print(int *a, int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// iterative solution
// void reverse(int *a, int n)
// {
//     for (int i = 0; i < n / 2; i++)
//     {
//         swap(a[i], a[n - i - 1]);
//     }
// }

// recursive
void reverse(int *a, int l, int r)
{
    if(l>=r){
        return;
    }
    swap(a[l],a[r]);
    reverse(a,l+1,r-1);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);

    reverse(a,0,n-1);
    print(a,n);

    return 0;
}