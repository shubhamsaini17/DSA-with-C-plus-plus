#include<iostream>
using namespace std;

void reverse_string(char name[] , int length_of_string){

    int s=0;
    int e=length_of_string-1;

    while (s<=e)
    {
           swap(name[s],name[e]);
           s++;
           e--;
    }
    

} 


int getlength(char name[]){
    int count=0;
    for (int i = 0;  name[i]!= '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
char name[20];
cin>>name;
cout<<name<<endl;
int length=getlength(name);
cout<<length<<endl;
reverse_string(name , length);
cout<<name<<endl;


return 0;
}