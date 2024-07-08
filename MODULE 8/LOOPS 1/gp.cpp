#include<iostream>
using namespace std;
int main()
{
    int a=1,n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" , ";
        a*=2;
    }
}