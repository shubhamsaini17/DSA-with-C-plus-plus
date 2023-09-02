#include<iostream>
using namespace std;

bool checkPalindrome(int i, int j , string &str)
{
// base case
if(i>j)
return true;

// condition
if(str[i]!=str[j])
    return false;
else
// resursion call
return checkPalindrome(i+1,j-1,str);
}
int main()
{

string name = "bookkoob";
int i=0 ,j=name.length()-1;

bool isPalindrome = checkPalindrome(i,j,name);

if(isPalindrome)
cout<<"it is a palindrome"<<endl;
else
cout<<"it is not a palindrome"<<endl;
return 0;
}