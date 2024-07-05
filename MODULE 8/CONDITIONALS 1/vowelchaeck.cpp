#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter the character that you want to chaeck : ";
    cin>>a;
    int b=(int)a;
    if(b==65||b==69||b==73||b==79||b==85)
    {
        cout<<"It is a vowel character in capital letter";
    }
    else if (b==97||b==101||b==105||b==111||b==117)
    {
        cout<<"Vowel character in small letter";
    }
    else{
        cout<<"It is a consonant character";
    }
    return 0;
}