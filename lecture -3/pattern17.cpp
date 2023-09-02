#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;

int row=1;

while (row<=n)
{
    int column=1;
    char output='A'+n-row;
    while (column<=row)
    {  
        cout<<output;
        output++;
        column++;
    } 
    cout<<endl;
    row++;
    
}
return 0;
}