#include<bits/stdc++.h>
using namespace std;
int isprime(int n, int i)
{        if(n==1)
     {
      return 0;  
     }
    if(i==1)
    {
        return 1; 
    }
    if(n%i==0)        //this will check  availability of factor
    {
        return 0;
    }
    return isprime(n, i-1);
     
}
int main()
{ 
    int n;
    int c;
    cout<<"Enter number"<<endl;
    cin>>n;
     c=isprime(n, sqrt(n));
 
    
     if(c==1)
      cout<<"Prime";
     else
     cout<<"Not prime"; 

  
 /*   for(int i=2; i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c=1;
        
            break;
        }
    }
    if(c==1)
    {
         cout<<n<<" is a not prime number."<<endl;
    }
         
        else{
              cout<<n<<" is a prime number."<<endl;
        }
       
    
    
      */      
    return 0;

}