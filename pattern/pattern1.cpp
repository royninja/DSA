#include<iostream>
using namespace std;

auto func = [](int n)
 {
    for (int i = 0; i < n; i++)
        {
            for (int i = 0; i < n; i++)
            {
                cout<<"*";
            }
            cout<<endl;
        } 
        
};

int32_t main(){
    int n;
    cin>>n;
    func(n);
}