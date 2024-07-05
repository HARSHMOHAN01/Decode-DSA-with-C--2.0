#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter the character that you want : ";
    cin>>a;
    int b=(int)a;
    if ((b>=97 && b<=122) || (b>=65 && b<=90))
    {
        cout<<a<<" is a character";
    }
    else{
        cout<<a<<" is not a character";
    }
    return 0;
}