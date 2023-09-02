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
    char letter = 'A';
    while (column<=n)
    {
        char output ='A'+row-1;
        cout<<output;
        column++;
    }
    cout<<endl;
    row++;
}


return 0;
}