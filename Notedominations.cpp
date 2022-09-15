#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int hundred=0, tens=0, ones=0;
    
    
        hundred = n/100;
        tens = (n-(hundred*100))/10;
        ones = (n - ( (hundred*100) + (tens*10) ) ); 

    int q;
    cin >> q;
    switch(q)
    {
        case 1 : cout << ones << endl;
        break;

        case 10 : cout << tens << endl;
        break;

        case 100 : cout << hundred << endl;
        break;

        default: cout << hundred << " " << tens << " " <<  ones << endl; 
    }
}
