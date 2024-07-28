#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for (int i=65;i<n+65;i++){
        for(int j=1;j<=4;j++)
        {
            cout<<(char)i<<" ";
        }
        cout<<endl;
    }
}