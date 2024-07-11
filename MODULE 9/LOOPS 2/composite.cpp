#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value that you want to check : ";
    cin>>n;
    for(int i=2 ; i<=n-1 ; i++)
    {
        if(n%i == 0)
        {
        cout<<"It's a composite number";
        break;
        }
    }
    return 0;
}