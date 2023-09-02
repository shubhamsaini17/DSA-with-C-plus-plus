#include<iostream>
using namespace std;
void bubbleSort(int *arr, int n)
{   
    for(int i = 0; i<n; i++) {
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j =0; j<n-i; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
        
        if(swapped == false) {
            //already sorted
            break;
        }
           
    }
}

int main(){
    int arr[6]={54,21,85,3,32,5};
    bubbleSort(arr,6);

    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}