#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a positive integer that you want to check : ";
    cin>> a;
    if (a%2==0)
    {
        cout<<"Even number";
    }
    else{
        cout<<"Odd number";
    }
    return 0;
}