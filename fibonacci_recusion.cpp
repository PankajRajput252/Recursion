#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n==1)
    {
        return 0; 
    }
    if(n==2)       
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
     
}
int main()
{ 
    int n;
    int c;
    cout<<"Enter positon of fibnocii  "<<endl;
    cin>>n;
     cout<<fib(n);
}    