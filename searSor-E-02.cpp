// counting sort
#include <iostream>
using namespace std;

void countSort(int *a, int n)
{
    int cnt[5] = {0};
    for(int i=0 ; i<n ; i++){
        cnt[a[i]]++;
    }
    for(int i=0 ; i<5 ; i++){
        while(cnt[i]--){
            cout << i << " ";
        }
    }
}

int main()
{
    int a[] = {1,2,3,1,2,3,1,1,1,1,1,2,2,3,4};
    int n = sizeof(a)/sizeof(a[0]);
    countSort(a,n);
    return 0;
}