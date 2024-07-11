#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number that you want : ";
    cin>>n;
    bool f=true;
    for(int i=2; i<=n/2;i++)
    {
        if(n%i==0)
        {
            f=false;
            break;
        }
    }
    if (f==true)
    cout<<n<<" is a prime number";
    else
    cout<<n<<" is not a prime number";
    return 0;
}