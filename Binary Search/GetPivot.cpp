#include<iostream>
using namespace std;

int Getpivot(int arr[], int n)
{
    int s=0, e = n-1 , m = s + (e-s)/2;
    while(s<e)
    {
        if(arr[m] >= arr[0])
        {
            s = m +1;
        }
        else
            e = m;
        m = s + (e-s)/2;
    }
    return m;
}


int main()
{
    int n, arr[100];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int a = Getpivot(arr,n);
    cout << a << endl ;
}