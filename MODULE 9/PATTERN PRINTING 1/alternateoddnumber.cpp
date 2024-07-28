#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1; i<=4; i++)
    {
        for(int j=1; j<=2*i-1; j++)
        {
            if(j%2!=0)
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}