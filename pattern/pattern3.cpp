#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row = 1;
    while( row <= n)
    {
        int column = 1;
        while ( column <= n)
        {
            cout<<row<<" ";
            column++;
        }
        cout<<endl;
        row++;
        
    }
    return 0;
}

/*
1111
2222
3333
4444
*/
