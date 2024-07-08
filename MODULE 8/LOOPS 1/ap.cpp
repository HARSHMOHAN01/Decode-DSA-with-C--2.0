#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Ente the value of n upto you want : ";
    cin>>n;
    int a=1;
    for(int i=0 ; i<=n ; i++)
    {
        cout<<a<<",";      
        a+=2;
    }
    return 0;
}