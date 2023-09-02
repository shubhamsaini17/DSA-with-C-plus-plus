#include<iostream>
using namespace std;

// for understanding
void print(int arr[],int start,int end){

    for (int i = start; i <=end; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}


bool binarySearch(int arr[],int start, int end,int key){
    
    //for understanding
    cout<<endl;
    print(arr,start,end);

    // base case
    if(start>end){
        return false;
    }
    int mid = start + (end-start)/2;
    // for understanding
    cout<<"value of arr mid: "<<arr[mid]<<endl;
    // element on mid // base case
    if(arr[mid]==key){
        return true;
    }
    
    if (arr[mid]>key)
    {
        return binarySearch(arr,start,mid-1,key);
    }
    else
    {
        return binarySearch(arr,mid+1,end,key);
    }
}
int main()
{
int arr[11]={2,4,6,10,14,18,23,38,49,55,222};
int size = 11;
int key = 222; // present / not

if(binarySearch(arr,0,size-1,key))
{
    cout<<"present "<<endl;
}
else
cout<<"absent "<<endl;

return 0;
}