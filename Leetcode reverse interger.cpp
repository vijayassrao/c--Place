#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int n, ans=0, flag=1;;
    cin>>n;
        
        while(n!=0)
        {
         int digit = n%10;
        if( (ans > INT_MAX/10) || (ans < INT_MIN/10))
        {
           flag=0;
           break;
        }
           
         ans = (ans*10) + digit;
         n = n/10;
        }
        if(flag==1)
        {
            cout<<ans<<endl;
        }
        else
            cout<<"0"<<endl;
        
}