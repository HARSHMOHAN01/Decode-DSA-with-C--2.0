#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value n : ";
    cin>>n;
    for(int i=1;i<n ; i++)
    {
        for(int j=1;j<n ;j ++)
        {
            if((i+j)>=5)
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}