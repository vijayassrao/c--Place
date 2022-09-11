#include<iostream>
using namespace std;

 int main()
 {
    int n;
    cin >> n;
    int sum=0, product=1, diff;

    while(n)
    {
        sum = sum + (n%10);
        product = product * (n%10);
        n= n/10;

    }
    diff = product-sum;
    cout << diff << endl;
 }