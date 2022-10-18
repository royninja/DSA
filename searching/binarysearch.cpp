#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int sizea, int key)
{
    int start = 0;
    int ending = sizea;

    while(start <= ending)
    {
        int mid = start + (ending - start)/2;
        if(arr[mid] == key)
        {
            return mid;
        }else if ( key < arr[mid])
        {
            ending = mid-1;
        }else if (key > arr[mid])
        {
            start = mid+1;
        }

    }
    return -1;
}

int main()
{
    int arr[5] = {4,7,9,10,20};
    int response = binarySearch(arr,5,2);
    response > 0 ? cout<<"Found" : cout<<"Not Found";
    return 0;
}
