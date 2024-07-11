#include<iostream>
using namespace std;
int main()
{
    int n,c1=0,c2=0,t;
    cout<<"Enter the value of n that you want : ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            c1=c1-i;
        }
        else{
            c2=c2+i;
        }
    }
    t=c1+c2;
    cout<<"The sum of the series is = "<<t;
    return 0;
}