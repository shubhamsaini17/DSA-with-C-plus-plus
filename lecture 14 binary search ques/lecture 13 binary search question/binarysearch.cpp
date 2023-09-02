#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid= start + (end-start)/2; // same as {(start+end)/2} but we use this to prevent integer overflow

    while (start<=end)
    {
        if (key==arr[mid])
        {
            return mid; // malab key mid ma he ha to return mid index value
        }
        if (key>arr[mid])
        {
            start=mid+1;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
        mid = start + (end-start)/2; // same as {(start+end)/2} but we use this to prevent integer overflow
    }
    return -1;
}


int main()
{

int Evenarr[6]={2,5,7,9,12,45};
int Oddarr[5]={1,4,6,7,9};



cout<<" 5 is present at index: "<<binarysearch(Evenarr,6,56)<<endl;
cout<<" 7 is present at index: "<<binarysearch(Oddarr,5,7);
return 0;
}