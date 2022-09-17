#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int BinarySearch(int arr[], int n, int k)
{
    int start=0, end=n-1, mid = (start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==k)
            return mid;
        else if(arr[mid] > k)
            end = mid-1;
        else
            start = mid+1;
        mid = start + ((end-start)/2);
    }
     return -1;
}

int main()
{
    int n, arr[100], k;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;

    //printArray(arr,n);
    int ans = BinarySearch(arr, n, k);
    cout << ans << endl;
    
}