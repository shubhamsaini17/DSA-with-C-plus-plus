#include<iostream>
using namespace std;

int binarysearch(int arr[],int size, int key){
    int start=0;
    int end=size-1;

    int mid= start + (end-start)/2;

    while (start<=end)
    {
        if (key==arr[mid])
        {
            return mid;
        }
        if (key>arr[mid]) // left of array
        {
            start=mid+1;
        }
        if (key<arr[mid]) // right of array
        {
            end=mid-1;
        }
        mid= start + (end-start)/2;
    }
    cout<<"element not found";
return -1;
}

int main()
{ 
    int size;
    cin >>size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            } 
        } 
    }
    
cout<<"sorted array is: "<<endl;
 for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
cout<<endl<<"enter element you want to search"<<endl;
int key;
cin>>key;


cout<<key<<" is found at index: "<<binarysearch(arr,size,key);

return 0;
}