#include<iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){
    int s=0;
    int e=size-1;

    int mid= s + (e-s)/2; // same as {(s+e)/2} but we use this to prevent integer overflow
    int ans=-1; // agar key mid ma he mil jaya to isma store karaya ge
    while (s<=e)
    {
        if (key==arr[mid])
        {
            ans= mid; // malab key mid ma he ha to store it in ans, mid index value
            e =mid-1;
        }
        else if (key>arr[mid]) // right ma jao
        {
            s=mid+1;
        }
        else if(key<arr[mid]){ // left ma jao
            e=mid-1;
        }
        mid = s + (e-s)/2; // same as {(s+e)/2} but we use this to prevent integer overflow
    }
    return ans;
}
int lastOcc(int arr[],int size,int key){
    int s=0;
    int e=size-1;

    int mid= s + (e-s)/2; // same as {(s+e)/2} but we use this to prevent integer overflow
    int ans=-1; // agar key mid ma he mil jaya to isma store karaya ge
    while (s<=e)
    {
        if (key==arr[mid])
        {
            ans= mid; // malab key mid ma he ha to store it in ans, mid index value
            s=mid+1;
        }
        if (key>arr[mid])
        {
            s=mid+1;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        mid = s + (e-s)/2; // same as {(s+e)/2} but we use this to prevent integer overflow
    }
    return ans;
}


int main()
{

int arr[6]={1,2,3,3,3,5};


// cout<<"key is found in first occurence at index: "<<firstOcc(arr,6,3 )<<endl;
// cout<<"key is found in last occurence at index: "<<lastOcc(arr,6,3 )<<endl;

// total no. of occurence of an element in array
//  formula
// total no. of occurence = (last occurenece index - first occurence index)+1

int total_Occ= ( lastOcc(arr,6,3 ) - firstOcc(arr,6,3 ) ) +1;

cout<<total_Occ;
return 0;
}