#include<iostream>
#include<array> //stl array library

using namespace std;
int main()
{
    // basic array

    int basic[3] ={1,2,3};

    // STL array

  //notation<type,size> name = {}; 
    array<int,4> arr = {1,2,3,4}; // STATIC array he hota ha {bharan ka baad size khud nhi bada ga}

//    operations
    
    // size
    int size= arr.size();

    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    cout<<endl<<"element at index 2: "<<arr.at(2)<<endl;

    cout<<"array empty or not: "<<arr.empty()<<endl;
    // if not empty it return 0 means false {boolean}

    cout<<"first element of array: "<<arr.front()<< endl;
    
    cout<<"last element of array: "<<arr.back()<< endl;
    
return 0;
}