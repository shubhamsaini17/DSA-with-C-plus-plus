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
    while (column<=n)
    {
        char output='A'+column-1;
        cout<<output;
        column++;
    } 
    cout<<endl;
    row++;
    
}


return 0;
}