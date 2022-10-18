#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[5] = {5,3,1,2,0};
    int n = 5; //for array size in loop
    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for(int j = i+1; j < n; j++)
        {
            if(a[j] < a[minIndex])
                minIndex = j;
        }
        swap(a[minIndex],a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
