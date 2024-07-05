#include<iostream>
using namespace std;
int main()
{
    int c,s;
    cout<<"Enter the cost price : ";
    cin>>c;
    cout<<"Enter the selling price : ";
    cin>>s;
    if(s>c)
    {
        cout<<" The profit is : "<<s-c;
    }
    else
    {
        cout<<"The loss is : "<<c-s;
    }
    return 0;
}