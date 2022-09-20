#include <bits/stdc++.h> 
#include<iostream>
using namespace std;


void selectionSort(int arr[], int n)
{  
    for(int i=0; i<n-1; i++)
    {
        int minindex = i;
        for(int j = i+1; j<n; j++)
        {
            if(arr[j] < arr[minindex])
                minindex = j;
        }
        swap(arr[minindex], arr[i]);
    }
    for(int j=0; j<n ;j++)
        cout << arr[j] << " ";
}

int main()
{
    int n, arr[100];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, n);
}