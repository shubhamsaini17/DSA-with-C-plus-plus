#include <iostream>
using namespace std;
//or can use int
int reverseArray(int arr[],int size){

int start=0;
int end= size-1;
while(start<=end){
swap(arr[start],arr[end]);
start++;
end--;
}
}
int printarray(int arr[],int size){

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
     cout<<endl;

}
 
int main()
{

    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1}; 
    int brr[5]={2,6,3,9,4};
 
    reverseArray(arr,10);
    reverseArray(brr,5);
    printarray(arr,10);
    printarray(brr,5);
    


    return 0;
}