#include<bits/stdc++.h>
using namespace std;
void printp(int n)
{    int s=0;
    if(n==0)
    {
        return;
    }
    cout<< (n%10);
  return printp(n/10);
 
    
}
int main()
{
   int n;
   cin>>n;
    printp(n);
}