#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the percentage score to check the grade : ";
    cin>>n;
    if (n>=91 && n<=100)
    {
        cout<<"Excellent";
    }
    else if (n>=81 && n<=90)
    {
        cout<<"Very good";
    }
    else if (n>=71 && n<=80)
    {
        cout<<"Good";
    }
    else if (n>=61 && n<=70)
    {
        cout<<"Can do better";
    }
    else if (n>=51 && n<=60)
    {
        cout<<"Average";
    }
    else if (n>=40 && n<=50)
    {
        cout<<"Below average";
    }
    else
    {
        cout<<"Fail";
    }
    return 0;
}