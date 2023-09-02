#include<iostream>
using namespace std;

void reverse(int i,string &str){
    //for understanding
    cout<<"call recieved for "<<str<<endl; 
    // base case
    if(i>(str.length()+1)/2)
        return;


   
    swap(str[i],str[str.length()-i-1]);
    i++;
     // recursion call
    reverse(i,str);
}

int main()
{
string name = "shubham";
int i=0;

reverse(i,name);

cout<<name<<endl;

return 0;
}