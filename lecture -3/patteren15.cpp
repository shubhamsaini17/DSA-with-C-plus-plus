#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;

int row=1;
int value=0;
while (row<=n)
{
    int column=1;
    while (column<=row)
    {   
        char output='A'+value;
    
      cout<<output;
      value++;
      column++;
    } 
    cout<<endl;
    row++;
    
}
return 0;
}