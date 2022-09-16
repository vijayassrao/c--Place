#include<iostream>
using namespace std;

int printarray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << ' ';
    }
}

void swapalt(int arr[], int n)
{   int temp=0;
    for(int i=1; i<=n-1 ; i+=2)
    {
        temp = arr[i-1];
        arr[i-1] = arr[i];
        arr[i] = temp;
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
    swapalt(arr,n);
    printarray(arr,n);
    cout << endl;

}
