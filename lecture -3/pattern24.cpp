#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;

int row=1;

while (row<=n)
{   
    // sapce traingle 1
    int space=n-row;
    while (space)
    {
        cout<<" ";
        space--;
    }
    //traingle 2
    int column=1;
    while (column<=row)
    {
        cout<<column;
        column++;
    }
    //third traingle
    int start=row-1;
    while (start)
    {
        cout<<start;
        start=start-1;
    }
    
    cout<<endl;
    row++;
    
}


return 0;
}