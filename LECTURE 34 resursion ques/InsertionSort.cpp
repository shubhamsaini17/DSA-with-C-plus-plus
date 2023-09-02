

#include <iostream>

using namespace std;

void insertionSort(int* arr, int n, int i)
{
    if(i==n || n==0)
    {
        return;
    }
    
    int x = arr[i];
    int inx = i;
    for(int j = i-1;j>=0;j--)
    {
        if(arr[j]>x)
        {
          inx = j;
          
        }
    }
    
    for(int j = i;j>inx;j--)
    {
        arr[j] = arr[j-1];
    }
    
    arr[inx] = x;
    
    
    insertionSort(arr,n, ++i);
}

int main()
{
    int n;
    cin>>n;
    
    int* arr = new int[n];
    for(int i= 0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Before sorting"<<endl;
    for(int i= 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
   insertionSort(arr,n,1);
    
    cout<<endl<<"After sorting"<<endl;
    for(int i= 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    delete [] arr;
    return 0;
}