// //q1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter the first number that you want : ";
//     cin>>a;
//     cout<<"Enter the second number that you want : ";
//     cin>>b;
//     if(a>b)
//     {
//         cout<<a<<"is greater";
//     }
//     else{
//         cout<<b<<" is greater";
//     }
// }

//q2
// #include<iostream>
// using namespace std;
// int main()
// {
//     int r,a,c;
//     cout<<"Enter the radius of circle that you want : ";
//     cin>>r;
//     a=3.14*r*r;
//     c=2*3.14*r;
//     if(c>a)
//     {
//         cout<<c<<" is greater";
//     }
//     else{
//         cout<<a<<" is greater";
//     }
//     return 0;
// }

//q3
// #include<iostream>
// using namespace std;
// int main()
// {
//     int y;
//     cout<<"Enter the year that you want to check : ";
//     cin>>y;
//     if((y%4==0 && y%100!=0) || y%400==0)
//     {
//         cout<<"leap year";
//     }
//     else
//     {
//         cout<<"not a leap year";
//     }
//     return 0;
// }

//q4
// #include<iostream>
// using namespace std;
// int main()
// {
//     int l,b,p,a;
//     cout<<"Enter the length of rectangle : ";
//     cin>>l;
//     cout<<"enter the breadth of the rectangle : ";
//     cin>>b;
//     p=2^(l+b);
//     a=l*b;
//     if (p>a)
//     cout<<"perimeter is greater than area";
//     else
//     cout<<"area is greater than perimeter";
//     return 0;
// }

//q5
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"enter 1st";
//     cin>>a;
//     cout<<"enter 2nd";
//     cin>>b;
//     cout<<"enter 3rd";
//     cin>>c;
//     if((a+b>c) && (b+c>a) && (a+c>b))
//     {
//         if ((a==b) && (b==c) && (c==a))
//         {
//             cout<<"these are sides of equilateral triangle";
//         }
//         else if (((a==b) && b!=c) || ((b==c) && c!=a) || ((c==a) && a!=b))
//         {
//             cout<<"These are the sides of isosceles triangle";
//         }
//         else{
//             cout<<"These are sides of scalene triangle";
//         }
//     }
//     else{
//         cout<<"These are not sides of triangle";
//     }
//     return 0;
// }

//q6
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"Enter the first marks : ";
//     cin>>a;
//     cout<<"Enter the second marks : ";
//     cin>>b;
//     cout<<"Enter the third marks : ";
//     cin>>c;
//     if(a<b && a<c)
//     {
//         cout<<a<<" is the smallest number";
//     }
//     else if (b<a && b<c)
//     {
//         cout<<b<<" is the smallest number";
//     }
//     else{
//         cout<<c<<" is the smallest number";
//     }
//     return 0;
// }

//q7
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x,y;
//     cout<<"Enter value for x cordinate : ";
//     cin>>x;
//     cout<<"Enter value for y cordinate : ";
//     cin>>y;
//     if (x==0 && y==0 )
//     {
//         cout<<x<<" and "<<y<<" lies on origin";
//     }
//     else if (x=0 && y!=0)
//     cout<<"Your cordinates lies on y axis";
//     else
//     cout<<"your cordinates lies on x axis";
//     return 0;
// }

//q8
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c,d,e,f,x,y,z;
//     cout<<"Enter the value of x for your first coordinates : ";
//     cin>>a;
//     cout<<"Enter the value of y for your first coordinates : ";
//     cin>>b;
//     cout<<"Enter the value of x for your second coordinates : ";
//     cin>>c;
//     cout<<"Enter the value of x for your second coordinates : ";
//     cin>>d;
//     cout<<"Enter the value of x for your third coordinates : ";
//     cin>>e;
//     cout<<"Enter the value of x for your third coordinates : ";
//     cin>>f;
//     x=b/a;
//     y=d/c;
//     z=f/e;
//     if (x==y && y==z && z==x)
//     {
//         cout<<"Points of the all three cordinates lies on same line";
//     }
//     else
//     {
//         cout<<"Points of the all three coordinates not lies on same line";
//     }
//     return 0;
// }

//q9
// #include<iostream>
// using namespace std;
// int main()
// {
//     char a;
//     cout<<"Enter the chaacter that you want : ";
//     cin>>a;
//     int b=(int)a;
//     if (b>=65 && b<=90)
//     cout<<"The character you have typed is a upper case alphabet";
//     else if (b>=97 && b<=122)
//     cout<<"The character you have types is a lower case alphabet";
//     else if (b>=48 && b<=57)
//     {
//         cout<<"The character you have typed is a digit";
//     }
//     else
//     cout<<"It is a special character";
//     return 0;
// }