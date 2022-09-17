#include<iostream>
using namespace std;

int IntSqrt(int n)
{
    int s=0, e = n,  ans=1;
    long long int mid = s + (e-s)/2, square;
    while(s<=e)
    {
        square = mid * mid;
        if(square == n)
            return mid;
        else if(square < n)
         {
            ans = mid;
            s = mid + 1;
         }
        else
            e = mid - 1;
        mid = s + (e-s)/2;
        
     }
    return ans;
}

double RequSqrt(int n, int W, int P)
{
    double factor = 1 ; 
    double ans=W;
    for(int i=0; i<P; i++)
    {
        factor = factor/10;
        for(double j=ans; j*j<n; j = j+factor)
        {
            ans = j;
        }
    }
    return ans;

}

int main()
{
    int n, precision;
    cin >> n >> precision;
    int Whole = IntSqrt(n);
    cout << RequSqrt(n, Whole, precision) << endl;
}

