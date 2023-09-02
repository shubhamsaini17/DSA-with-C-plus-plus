#include<iostream>
using namespace std;

int even_odd()
{
    int num1;
    cin>>num1;

    if (num1%2==0)
    //or can be as  { if (num1&1==1) }
    {
        cout<<num1<<" is even number ";
    }
    else
    cout<<"odd number";
    
}

int main()
{

even_odd();

return 0;
}