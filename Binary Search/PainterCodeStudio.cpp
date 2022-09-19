#include<iostream>
using namespace std;


bool isPossible(int boards[],int n,  int k, int mid)
{
    int PaintedSum = 0;
    int Paintercount = 1;
    
    for(int i=0; i< n; i++)
    {
        if(PaintedSum + boards[i] <= mid)
        {
            PaintedSum += boards[i];
        }
        else
        {
            Paintercount++;
            if( Paintercount > k || boards[i] > mid)
            {
                return false;
            }
            PaintedSum = boards[i];
        }
    }
    return true;
}


int findLargestMinDistance(int boards[], int n, int k)
{
   int s = 0, sum = 0,  ans;
   for(int i = 0; i < n; i++)
   {
       sum += boards[i];
   }
   int e = sum, mid = s + (e-s)/2;
   
    while(s<=e)
    {
        if(isPossible(boards, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int n, boards[100], p;
    cin >> n >> p;
    for( int i=0; i<n ; i++)
    {
        cin >> boards[i];
    }
    int ans = findLargestMinDistance(boards, n, p);
    cout << ans << endl;
}