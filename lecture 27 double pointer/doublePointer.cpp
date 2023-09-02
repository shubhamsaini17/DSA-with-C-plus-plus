#include<iostream>
using namespace std;

// void update(int **p2){
//     // p2 = p2+1;

//     // *p2=*p2+1; // change in p value
//     **p2 = **p2+1;
// }

int main()
{
// int i=5;
// int* p = &i;
// int** p2 = &p;


// cout<<i<<endl;
// cout<<&i<<endl;
// cout<<"printing p"<<p<<endl;
// cout<<*p<<endl;

// cout<<endl;

// cout<<i<<endl;
// cout<<*p<<endl;
// cout<<&p<<endl;
// cout<<p2<<endl;
// cout<<*p2<<endl;
// cout<<*p<<endl;
// cout<<**p2<<endl;


// cout<<&i<<endl;
// cout<<p<<endl;
// cout<<*p2<<endl;

// cout<<endl;
// cout<<&p<<endl;
// cout<<p2<<endl;


// cout<<"before "<<i<<endl;
// cout<<"before "<<p<<endl;
// cout<<"before "<<p2<<endl;
// update(p2);
// cout<<"after "<<i<<endl;
// cout<<"after "<<p<<endl;
// cout<<"after "<<p2<<endl;
int first= 6;
int p =7;
int *q = &p;
*q=first;
// (*q)++;
cout<<*q<<endl;




return 0;
}