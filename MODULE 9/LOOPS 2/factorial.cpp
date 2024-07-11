#include<iostream>
using namespace std;
int main()
{
    int n,t=1;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        t=t*n;
        n-=i;
    }
    cout<<t;
    return 0;
}