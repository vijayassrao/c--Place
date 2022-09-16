#include<iostream>
using namespace std;

int reverse(int arr[], int n)
{   int temp=0;
    for(int i=0; i<(n/2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}

int main()
{
    int n, arr[100];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr,n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

}