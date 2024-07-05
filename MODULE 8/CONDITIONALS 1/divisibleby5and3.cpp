#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number that you want to check = ";
    cin>>x;
    if (x%3==0 && x%5==0)
    cout<<"Divisible by both";
    else
    cout<<"not divisible by both";
    return 0;
}