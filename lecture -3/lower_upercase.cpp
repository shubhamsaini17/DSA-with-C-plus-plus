#include<iostream>
using namespace std;
int main()
{
char value;
cin>>value;


if(value>=97 && value<=122){

cout<<"lowercase letter";
}
else if(value>=65 && value<=90){

cout<<"uppercase letter";
}
else 
cout<<"number";


}