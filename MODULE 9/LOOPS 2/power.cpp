#include<iostream>
using namespace std;
int main()
{
    int pow=1,a,b;
    cout<<"Enter the base number : ";
    cin>>a;
    cout<<"Enter the exponent number : ";
    cin>>b;
    for(int i=1;i<=b;i++)
    {
        pow*=a;
    }
    cout<<pow;
    return 0;
}