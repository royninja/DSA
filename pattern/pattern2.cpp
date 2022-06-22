#include<iostream>
using namespace std;

auto func = [](int n){
    for (int i = 1; i <= n+1; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<i;   
        }
        cout<<endl;
    }
    
};

int main(){
    int n;
    cin>>n;
    func(n);
    return 0;
    /*1111
      222
      33
      4
      */
}