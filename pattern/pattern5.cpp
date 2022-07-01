// /*
//NOTE:
// Enter:3
// 3 2 1 
// 3 2 1
// 3 2 1

// My Approach
// // int row = 1;
//     // while( row <= n)
//     // {
//     //     int column = n;
//     //     while ( column >= 1)
//     //     {
//     //         cout<<column<<" ";
//     //         column--;
//     //     }
//     //     cout<<endl;
//     //     row++;
        
//     // }

// */
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter:";
    cin>>n;

    int row = 1;
    while( row <= n)
    {
        int column = 1;
        while ( column <= n)
        {
            cout<<n-column+1<<" ";
            column++;
        }
        cout<<endl;
        row++;
        
    }
    return 0;
}

