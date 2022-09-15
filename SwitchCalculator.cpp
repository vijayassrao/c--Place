#include<iostream>
using namespace std;

int main()
{
    char ch;
    int a,b;
    cin >> a >> ch >> b;

    switch(ch)
    {
        case '+': cout << (a+b) << endl;
        break;

        case '-': cout << (a-b) << endl;
        break;

        case '*': cout << (a*b) << endl;
        break;

        case '/': if(b!=0)
                    {
                        cout << (a/b) << endl;
                    }
                    else
                        cout<< "Division by 0 error" << endl;
        break;
    }
}