#include<iostream>
using namespace std;

int length_charArr(char name[]){
    int count=0;

    for (int  i = 0; name[i]!= '\0'; i++)
    {
        count++;
    }
    
    return count;
}

int main()
{

char name[20];
cin>>name;

// cout<<name<<endl;

cout<<length_charArr(name);

return 0;
}