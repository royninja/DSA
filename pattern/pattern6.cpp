// 3
// 1 2 3 
// 4 5 6
// 7 8 9
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter";
    cin>>n;

    int row = 1, count = 1;
    while( row <= n)
    {
        int column = 1;
        while ( column <= n)
        {
            cout<<count<<" ";
            count++;
            column++;
        }
        cout<<endl;
        row++;
        
    }
    return 0;
}
