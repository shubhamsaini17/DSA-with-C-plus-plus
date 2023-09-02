#include<iostream>
using namespace std;

void bubbleSort(int *arr,int size){
    // base case
    if(size==0 || size==1)
        return;

    // 1 case solve - lagest element ko end me rakh dega
    for(int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr , size-1);
}

int main()
{
    int arr[6] ={7,8,4,6,2,1};

    bubbleSort(arr,6);

    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}