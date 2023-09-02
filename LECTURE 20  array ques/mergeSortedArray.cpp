#include<iostream>
using namespace std;

void merge2Array(int arr1[],int n,int arr2[],int m,int arr3[])
{
    int i=0; // pointer for 1st array(point ar index 0 of array1)
    int j=0; // pointer for 2st array(point ar index 0 of array2)
    int k=0; // pointer for 3st array(point ar index 0 of array2)
    
    while (i<n && j<m)
    {
         if (arr1[i]>arr2[j])
         {
            arr3[k++]=arr2[j++];
            // k++;   ----  // to reduce this line we can write it in above line with arr3[k++] --> means first use the value of k then increment it same in programs
            // j++;
         }
         else
         {
            arr3[k++]=arr1[i++]; // below to line writeen inside the arr3[k++] & arr1[i++]
            // k++;
            // i++;   
         }
    }
    while (i<n)
    {
        arr3[k++]=arr1[i++];
        // k++;
        // i++;
    }
     while (j<n)
    {
        arr3[k++]=arr2[j++];
        // k++;
        // j++;
    }
}
void printMergedArray(int arr3[],int m){
    for (int  i = 0; i <m; i++)
    {
        cout<<arr3[i]<<" ";
    }
}
int main()
{

  int arr1[5]={1,3,5,7,9};
  int arr2[3]={2,4,6};

  int arr3[8]= {0}; // only one zero means all index contain zero

    merge2Array(arr1,5,arr2,3,arr3);
    printMergedArray(arr3,8);

return 0;
}