#include<iostream>
using namespace std;

bool linearSearch(int *arr , int size ,int key){
    //base case
    if (size==0)
    {
        return false;
    }

    if (arr[0]==key)
    {
        return true;
    }
    else
{
    bool ans = linearSearch(arr+1 , size-1,key);
        return ans;
}   
}

int main()
{
int arr[5]={1,2,3,4,5};
int size = 5;
int key = 90; // present / not

bool ans = linearSearch(arr,size,key);

if (ans){
    cout<<"found"<<endl;
}
else
    cout<<"not present"<<endl;

return 0;
}