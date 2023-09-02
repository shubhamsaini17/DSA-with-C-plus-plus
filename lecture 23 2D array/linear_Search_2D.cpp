#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int traget , int row , int column){

for (int row= 0; row < 3; row++){ 
    
    for (int column = 0; column < 4; column++) 
    {
        if(arr[row][column]== traget){
            return 1;
        }
    }
  
}
  return 0;
}

int main()
{

int arr[3][4];   // 3 X 4 => 12 so it can store total 12 elements



// taking row-wise input
for (int row= 0; row < 3; row++){ // 1st for loop for row 
    
    for (int column = 0; column < 4; column++) // 2st for loop for column    
    {
        cin>>arr[row][column];
    }
    
}

// print 2D array
for (int row = 0; row < 3; row++){ 
    for (int column = 0; column < 4; column++)  
    {
        cout<<arr[row][column]<<" ";
    }
    cout<<endl;
}

int target;
cout<<"Enter element you want to search"<<endl;
cin>>target;
//                       row,column
if (isPresent(arr,target, 3, 4))
    cout<<"element found"<<endl;
else
    cout<<"not found";
  
    return 0;
} 