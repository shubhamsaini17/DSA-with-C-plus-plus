//calculator
#include<iostream>
using namespace std;
int main()
{

int a,b;
char operation;
cin>> a>>b>>operation;

switch (operation)
{
case ('+'): cout<<a+b;
    break;
case ('-'): cout<<"a-b";
break;
case ('*'): cout<<"a*b";
break;
case ('/'): cout<<"a/b";
default: cout<< a%b;
    break;
}

return 0;
}