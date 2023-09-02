#include<iostream>
using namespace std;

int main()
{

int arr[5];
char ch[6]= "abcde";

cout<<arr<<endl; //print address of 0th index of array
cout<<ch<<endl; // print full char arrary

char *c = &ch[0];
// it also print entire string
cout<<c<<endl; // it stop after Printing E lyoki uska baaad null character ha 


char temp = 'z';

char *p = &temp;
cout<<p<<endl;

return 0;
}