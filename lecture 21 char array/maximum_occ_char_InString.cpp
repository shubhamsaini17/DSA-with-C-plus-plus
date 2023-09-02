#include<iostream>
using namespace std;

char getMaxOccCharacter(string s){
    int arr[26] ={0}; // mapped indexs of array with alphebates 0--a , 1--b , 25--z
    
    // created an array for count of characters
    for (int i = 0; i < s.length(); i++)
    {   char ch= s[i];
        //character is in lowercase
        int number=0;
        number = ch - 'a';
        arr[number]++;
    }
   
    //  find maximum occ. character
    int maxi=-1, ans=0;

    for (int i = 0; i < 26; i++)
    {   
        if (maxi< arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    
    // char finalans = 'a' +ans;
    return  'a' +ans;

}
int main()
{

string s;
cin>>s;

cout<<"maximum occured character in string is: "<<getMaxOccCharacter(s);

return 0;
}