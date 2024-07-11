#include<iostream>
using namespace std;
int main()
{
    int n,x,count=0;
    cout<<"Enter the number that you want : ";
    cin>>n;
    while(n>0)
    {
        x=n%10;
        n=n/10;
        count+=x;
    }
    cout<<count;
    return 0;
}