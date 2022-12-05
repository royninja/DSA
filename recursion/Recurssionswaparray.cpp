#include <bits/stdc++.h>
using namespace std;

void f(int a[], int i, int j)
{
    if(j<=i)
    {
        return;
    }
    swap(a[i],a[j]);
    f(a,i+1,j-1);
}

int main() {
    int a[] = {1,2,3,4,5};
    int i = 0,j=4;
    f(a,i,j);
    for(int i = 0; i <=4; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}