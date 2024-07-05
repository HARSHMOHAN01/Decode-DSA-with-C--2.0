#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the value that you want to convert : ";
    cin>>x;
    if(x>0)
    {
        cout<<"The absolute value is : "<<x;
    }
    else
    {
        cout<<"The absolute value is : "<<-x;
    }
    return 0;
}