//q1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

//q2
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n+1-i;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

//q3
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i=65;i<=65+n;i++)
//     {
//         for(int j=65;j<i;j++)
//         {
//             cout<<(char)j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//q4
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i=0;i<=n;i++)
//     {
//         if(i%2==1)
//         {
//             for(int j=1;j<=i;j++)
//             {
//                 cout<<j<<" ";
//             }
//         }
//         else{
//             for(int k=1;k<=i;k++)
//             {
//                 cout<<(char)('A'+k-1)<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//q5
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i=1;i<2*n;i++)
//     {
//         if(i<n)
//         {
//             for(int i=0;i<3;i++)
//             {
//                 for(int j=0;j<i;j++)
//                 {
//                     cout<<"*";
//                 }
//                 cout<<endl;
//             }
//         }
//         else if (i==n)
//         {
//             for(int i=1;i<=4;i++)
//             {
//                 cout<<"*";
//             }
//         }
//         else if (i>n)
//         {
//             for(int i=1;i<=3;i++)
//             {
//                 for(int j=1;j<n+1-i;j++)
//                 {
//                     cout<<"*";
//                 }
//                 cout<<endl;
//             }
//         }
//     }
// }