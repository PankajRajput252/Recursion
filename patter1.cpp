// 1 2 3 4.....
 #include<bits/stdc++.h>
using namespace std;
void patt(int n)
{    
    if(n==5)
    {
        return;
    }
   cout<<n<<" ";  
  return patt(n+1);

    
}
int main()
{
   int n=1;

 patt(n);
}