#include<bits/stdc++.h>
using namespace std;
int printp(int n)
{    int s=0;
    if(n==0)
    {
        return 0;
    }
    
  return n+printp(n-1);
 
    
}
int main()
{
   int n;
   cin>>n;
    cout<<printp(n);
}