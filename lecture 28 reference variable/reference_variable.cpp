#include<iostream>
using namespace std;

// bad practice
// int& func(int a){
//     int num=a;
//     int& ans = num;
//     return ans;
// }

int getSum(int *array,int n ){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += array[i];
    }
    return sum;
}
// void update(int &i){
//     i++;
// }
int main()
{

// int i =4;
// create reference variable 
// int &j=i;
// cout<<i<<endl;
// cout<<j<<endl;
// j++;
// update(i);
// cout<<i<<endl;

// dynamic memory allocation
// how to use heap memory

// we can not name the variable when declared in heap memory
//eg:

new char; // char varibale is declayered in heap memory but no name -- this statment only return the address where this space is available for storage , we can acess this space using pointers 
// eg:
char* ch = new char;
int* i = new int;
float f =5;
// cout<<sizeof(f);
 
 // create array in heap memory /dynamic allocation
 
//  int* arr = new int[1];
// cout<<sizeof(arr);

int n;
cin>>n;

// variable size array(n size)
int *array = new int[n];

// taking input in array
for(int i=0; i<n; i++){
    cin>>array[i];
}
int ans =getSum(array,n);
cout<< ans<<endl;

// memory delocation/deletion form heap (we have to do it manualy in case of dynamic allocation)
//in case of variable heap memory deletion 
int *a=new int;
delete a;

// in case of array memory deletion form heap 
delete []array;


return 0;
}