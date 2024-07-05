#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a three digit number = ";
    cin>>x;
    if(x>=100 && x<=999)
    cout<<"It's a three digit number";
    else
    cout<<"not a three digit number";
    return 0;
}