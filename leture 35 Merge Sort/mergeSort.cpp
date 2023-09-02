#include <iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrIndex = s;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrIndex];
        mainArrIndex++;
    }

    mainArrIndex = mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrIndex];
        mainArrIndex++;
    }

    // merge 2 sorted array
    int index1 = 0;
    int index2 = 0; 
    mainArrIndex =s;
    while (index1 < len1 && index2 <len2)
    {   if(first[index1] < second[index2]){
        arr[mainArrIndex]= first[index1];
        mainArrIndex++;
        index1++;        
    }
    else{
        arr[mainArrIndex]= second[index2];
        mainArrIndex++;
        index2++;

    }
    }
    while (index1 < len1)
    {
        arr[mainArrIndex]= first[index1];
        mainArrIndex++;
        index1++; 
    }
    while (index2 < len2)
    {
        arr[mainArrIndex]= second[index2];
        mainArrIndex++;
        index2++; 
    }
    // dynamic dellocation
    delete []first;
    delete []second;
    }
    


void mergeSort(int *arr, int s, int e){
    //base case
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;

    // left part sorted
    mergeSort(arr,s,mid);

    // right part sort
    mergeSort(arr, mid+1,e);

    // merge this array
    merge(arr, s , e);

}


int main()
{
    int arr[5] = {2, 8, 1, 6, 4};
    int n = 5;

    mergeSort(arr, 0, n - 1);

    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}