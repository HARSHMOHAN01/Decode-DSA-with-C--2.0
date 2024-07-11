#include<iostream>
using namespace std;
int main()
{
    int n,t,count=0;
    cout<<"Enter the digit that you want : ";
    cin>>n;
    while(n>0)
    {
        t=n/10;
        n=t;
        count++;
    }
    cout<<count;
    return 0;
}