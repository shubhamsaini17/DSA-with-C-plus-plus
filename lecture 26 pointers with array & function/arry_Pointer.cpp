#include<iostream>
using namespace std;
int main()
{

int arr[10]={1,4,2,3,5,6,7,8,9,10};

// address array first location same with both
cout<<arr<<endl; //first location address
cout<<&arr[0]<<endl; //first location address

cout<<*arr<<endl; // value at 0 th index of array
cout<<*arr+1<<endl; // value at 0th index is 1 and add 1 in it. so 1+1 =2
cout<<*(arr+1)<<endl; // value at 1 st index of array
cout<<*(arr+2)<<endl; // value at 2 nd index of array

cout<<(*arr)+1<<endl; //first(1st index) location address +1 =2 ==> same as line 13


cout<<endl;

int arr1[10] = {23,122,41,67};

// both are same both give index 2 value
cout<<arr1[2]<<endl;
cout<<*(arr1+2)<<endl; // 2 matlab 2 interger of 4-4 byte added in   starting address so give index 2nd location address then it print its value 

int i =3;

cout<<i[arr1]<<endl; // same as arr1[i]


int temp[10];
cout<<"size of array: "<<sizeof(temp)<<endl;
cout<<"size of integer at index 0: "<<sizeof(*temp)<<endl;
cout<<"size of integer at index 0: "<<sizeof(&temp)<<endl; // temp ma address or uska size {adrress ka}


int *ptr = &temp[0]; // address store in ptr is 8byte  so it give 8byte as output
cout<<sizeof(ptr)<<endl; // ptr --> address
cout<<sizeof(*ptr)<<endl; // *ptr -->value present at tha t address
cout<<sizeof(&ptr)<<endl; // *ptr 

int a[20]= {1,2,3,5};
cout<<&a[0]<<endl; //same address
cout<<&a<<endl; //same
cout<<a<<endl; //same

int *p = &a[0];
cout<<p<<endl; // address of &a[0] in p
cout<<*p<<endl; //value at address &a[0]
cout<<&p<<endl; // addres of p

int arr2[10];

// arr2 = arr2+1; // can't change the address because arr2 is itself an address

// BUT

int *ptr2= &arr2[0];
cout<<ptr2<<endl;
ptr2 = ptr2+1; // ptr2 is pointing or storing the &arr2[0] so it is increasing the address where it is pointing not his actual/own address 

// so its true and it first point to 0th elemnet address of array after adding 1 , as array of integer address is incresed by 4 
// eg 710 +1 = 714 {cause 1 int size 4 bytes}
cout<<ptr2<<endl;
return 0;
} 