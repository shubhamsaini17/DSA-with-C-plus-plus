#include<iostream>
using namespace std;

void printarray(auto array[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<endl;
    }
    
}
int main()
{


int num[100];  
fill_n(num, 100, -24); // to fill -24 at all the indexs in an array

int arr[5]={1,2,3,4,5};
printarray(arr,5);

int sizeofarray= sizeof(arr)/sizeof(int);
cout<<"size of the array is: "<<sizeofarray<<endl;

char arr2[5]={'1','2','3','4','5'};
int sizeofarray2= sizeof(arr2)/sizeof(char);
cout<<"size of the array is: "<<sizeofarray2;
printarray(arr2,5);
return 0;
}