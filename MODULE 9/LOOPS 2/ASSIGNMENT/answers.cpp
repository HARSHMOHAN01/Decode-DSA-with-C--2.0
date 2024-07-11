// #include <bits/stdc++.h>
// using namespace std;
// int main( ) {
// int t = 10;
// while (t /= 2) {
// cout << "Hello" << endl;
// }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main( ) {
// for (int x = 1; x * x <= 10; x++)
// cout << "In for loop" << endl;
// }

//q5
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,mod,sum=0;
//     cout<<"Enter the number n : ";
//     cin>>n;
//     while(n>0)
//     {
//         mod=n%10;
//         n=n/10;
//         if(mod%2==0)
//         {
//             sum+=mod;
//         }
//     }
//     cout<<sum;
//     return 0;
// }

//q6
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,t,rem,rev=0,sum;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     t=n;
//     while (n>0)
//     {
//         rem=n%10;
//         rev=rev*10+rem;
//         n=n/10;
//     }
//     sum=t+rev;
//     cout<<sum;
//     return 0;
// }

//q7
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,a=1;
//     cout<<"Enter the number n : ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<a<<endl;
//         a*=(i+1);
//     }
//     return 0;
// }

//q8
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,a=1,b=1,sum;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     cout<<a<<" "<<b<<" ";
//     for(int i=2;i<n;i++)
//     {
//         sum=a+b;
//         cout<<sum<<" ";
//         a=b;
//         b=sum;
//     }
//     return 0;
// }

//q9
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,rem,t,rev=0;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     t=n;
//     while(n>0)
//     {
//         rem=n%10;
//         rev=rev+rem*rem*rem;
//         n=n/10;
//     }
//     if(rev==t)
//     cout<<"Armstrong number";
//     else
//     cout<<"Not an armsrong number";
//     return 0;
// }