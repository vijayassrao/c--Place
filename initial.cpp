#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    int k=0;

    while(i<=n)
    {
        int j=1;
        while(j<=i)
        { 
            char ch='A' + n +j - 2 - k; 
            cout<<ch;
            j=j+1;


        }
        k=k+1;
        cout<<endl;
        i++;
    }


}
