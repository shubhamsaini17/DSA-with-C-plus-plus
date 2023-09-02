#include<iostream>
using namespace std;
//can also use simple(int arr[],int n) or (int *array,int n) { * vala ara ka index ko point kra ga or actual array ma change hoga }
void reverseArray(int *array,int n)
{
    int start=0;
    int end=n-1;
    
    while (start<=end)
    {
        swap(array[start],array[end]);
        start++;
        end--;
    }
}
int main()
{

  int arr[6]={54,21,85,3,32,5};
      for (int  i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"after swap"<<endl;

    reverseArray(arr,6);

    for (int  i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    

return 0;
}