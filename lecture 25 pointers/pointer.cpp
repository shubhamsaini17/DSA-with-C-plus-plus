#include<iostream>
using namespace std;
int main()
{

// int a= 5;

// int *ptr = &a;
// cout<<ptr<<endl;
// cout<<*ptr<<endl;
// // ptr++;
// // cout<<ptr<<endl;

// // *ptr= *ptr+1;
// // or 
// (*ptr)++;
// cout<<*ptr<<endl;

// // copying a pointer
// int *ptr2=ptr;
// cout<<ptr2<<endl;
// cout<<*ptr2<<endl;
int j=10;
int i=2;
int *t=&i;
// cout<< (*t)<<endl;
(*t)++;
*t=j;
// cout<< *t<<endl;
// cout<<"before t"<<t<<endl;
// t=t-1;
cout<<"after t"<<*t <<j<<i<<endl;
// int g=5;
// void *p;
// p = &g;
// // int** y = &p;
// cout<<endl;

// cout<<&p<<endl;
// cout<<&g<<endl;
// cout<<g<<endl;
// cout<<y<<endl;
// cout<<*y<<endl;
// // cout<<**y<<endl;
//  cout<<p<<endl;
// cout<<"sfs"<<endl;

// // wild pointer

// int *point;
// int a=10;
// point =&a;
// *point =6;
// cout<<*point<<endl;






return 0;
}