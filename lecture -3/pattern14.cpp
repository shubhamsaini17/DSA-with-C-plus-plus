// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cin>>n;

// int row=1;
// char counter='A';
// while (row<=n)
// {
//     int column=1;
//     while (column<=n)
//     {
//         char output='A'+row+column-2;
//         cout<<output;
//         counter++;
//         column++;
//     } 
//     cout<<endl;
//     row++;
    
// }


// return 0;
// }

#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;

int row=1;
char counter='A';
while (row<=n)
{
    int column=1;
    while (column<=n)
    {
        char output='A'+row+column-2;
        cout<<output;
        counter++;
        column++;
    } 
    cout<<endl;
    row++;
    
}


return 0;
}