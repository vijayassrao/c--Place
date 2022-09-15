#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
     int k=0, m = n;
        while(m!=0)
        {
            
            m = m >> 1;
            k = (k << 1) | 1;
          
        }
        if(n==0)
             k=1;
          n = ((~n) & k );
        cout << n << endl;
}