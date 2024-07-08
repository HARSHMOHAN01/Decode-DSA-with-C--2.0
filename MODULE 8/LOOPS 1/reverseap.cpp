#include<iostream>
using namespace std;
int main()
{
    int a=100;
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for (int i=0;i<34;i++)
    {
        cout<<a<<" , ";
        a-=3;
    }
    return 0;
}