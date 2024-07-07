//q1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter the first number : ";
//     cin>>a;
//     cout<<"Enter the second number : ";
//     cin>>b;
//     if (a>b)
//     cout<<"first number "<<a<<" is the largest";
//     else
//     cout<<"second number "<<b<<" is the largest";
//     return 0;
// }

//q2
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,c,r;
//     cout<<"Enter the radius of the circle : ";
//     cin>>r;
//     c=2*3.14*r;
//     a=3.14*r*r;
//     if (c>a)
//     cout<<"Circumference is greater than area";
//     else
//     cout<<"area is greater than circumference";
//     return 0;
// }

//q3
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"Enter the year that you want : ";
//     cin>>a;
//     if (a%4==0 && (a%100!=0 || a%400==0))
//     {
//         cout<<"Congrats it's a leap year";
//     }
//     else
//     cout<<"It's not a leap year";
//     return 0;
// }

//q4
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,p,l,b;
//     cout<<"Enter the length : ";
//     cin>>l;
//     cout<<"Enter the breadth : ";
//     cin>>b;
//     a=l*b;
//     p=2*(l+b);
//     if (a>p)
//     {
//         cout<<"Area is greater than perimeter";
//     }
//     else
//     cout<<"Perimeter is greater than area";
//     return 0;
// }

//q5
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"Enter the first side of a triangle : ";
//     cin>>a;
//     cout<<"Enter the second side of a traingle : ";
//     cin>>b;
//     cout<<"Enter the third side of a triangle : ";
//     cin>>c;
//     if (a+b>c || b+c>a || c+a>b)
//     {
//     if (a==b && b==c && c==a)
//     {
//         cout<<"It's an equilateral triangle";
//     }
//     else if ((a==b && b!=c && c!=a) || (c==a && a!=b && b!=c) || (c==a && b!=c && a!=b))
//     {
//         cout<<"It's an isosceles triangle";
//     }
//     else{
//         cout<<"It's a scalene triangle";
//     }
//     }
//     else
//     cout<<"They are not a sides of triangle";
// }

//q6
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"Enter your first marks : ";
//     cin>>a;
//     cout<<"Enter the second marks : ";
//     cin>>b;
//     cout<<"Enter your third marks : ";
//     cin>>c;
//     if(a<c)
//     {
//         if (a<b)
//         {
//             cout<<"A has least marks";
//         }
//         else{
//             cout<<"B has least marks";
//         }
//     }
//     else
//     {
//         if(c<b)
//         cout<<"C has least marks";
//         else
//         cout<<"B has least marks";
//     }
//     return 0;
// }

//q7
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x,y;
//     cout<<"Enter the value of x coordinate : ";
//     cin>>x;
//     cout<<"Enter the value of y coordinate : ";
//     cin>>y;
//     if (x==0 && y!=0)
//     {
//         cout<<"The point lies on y axis";
//     }
//     else if (x==0 && y==0)
//     {
//         cout<<"The point lies on the origin";
//     }
//     else if (y==0 && x!=0)
//     {
//         cout<<"The point lies on x axis";
//     }
//     else
//     cout<<"The point lies on somewhere on the coordinated";
//     return 0;
// }

//q8
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c,d,e,f,x,y,z;
//     cout<<"Enter the x-coordinate of first point";
//     cin>>a;
//     cout<<"Enter the y-coordinate of first point";
//     cin>>b;
//     cout<<"Enter the x-coordinate of second point";
//     cin>>c;
//     cout<<"Enter the y-coordinate of second point";
//     cin>>d;
//     cout<<"Enter the x-coordinate of third point";
//     cin>>e;
//     cout<<"Enter the y-coordinate of third point";
//     cin>>f;
//     x=b/a;
//     y=d/c;
//     z=f/e;
//     if(x==y && y==z && z==a)
//     {
//         cout<<"All the coordinates lies on the same plane";
//     }
//     else
//     cout<<"Coordinates don't lie on same plane";
//     return 0;
// }

//q9
// #include<iostream>
// using namespace std;
// int main()
// {
//     char a;
//     cout<<"Enter the character : ";
//     cin>>a;
//     int b=(int)a;
//     if (b>=65 && b<=90)
//     cout<<"It's a character of upper letter";
//     else if (b>=97 && b<=122)
//     cout<<"It's a character of lower letter";
//     else if (b>=48 && b<=57)
//     cout<<"It's a character of digits";
//     else
//     {
//         cout<<"It may be a special character";
//     }
//     return 0;
// }