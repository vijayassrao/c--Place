#include<iostream>
using namespace std;

int Fact(int num)
{
    int ans=1;
    for(int i=1; i<=num; i++)
    {
          ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r)
{
    return ( Fact(n) / (Fact(r)*(Fact(n-r))) ); 
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << nCr(n,r) << endl;
}