#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{   
   for( int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0)
        {
            if(arr[j] > temp)
                arr[j+1] = arr[j];
            else 
                break;
            j--;
        }
        arr[j+1] = temp;
    }
    for(int k=0; k<n; k++)
        cout << arr[k] << " ";
    
}

int main()
{
    int n, arr[100];
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    InsertionSort(arr, n);
}