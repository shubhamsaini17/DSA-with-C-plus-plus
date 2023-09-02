#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;

 int row=1;

 while (row<=n)
 {
    int space=row-1;
    while (space)
    {
        cout<<" ";
        space--;
    }
    
    int number=n-row+1;
    while (number)
    {
        cout<<row;
        number--;
    }
    cout<<endl;
    row++;
    
 }
 

return 0;
}