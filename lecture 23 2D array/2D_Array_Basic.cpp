#include<iostream>
using namespace std;

int main()
{

// int arr[3][4];   // 3 X 4 => 12 so it can store total 12 elements

// khud input kasa de ex.
int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};  
// is row-wise element dal raha ha =>  pela 1st row ma , fir 2nd , 3rd row


// row wise input 
               // 1st row , 2nd row , 3rd row
//int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};   


// taking row-wise input
for (int row= 0; row < 3; row++){ // 1st for loop for row 
    
    for (int column = 0; column < 4; column++) // 2st for loop for column    
    {
        cin>>arr[row][column];
    }
    
}

// taking column-wise input

/*
for (int column = 0; column < 4; column++){ // 1st for loop for column
    
    for (int row = 0; row < 3; row++) // 2st for loop for row
    {
        cin>>arr[row][column];
    }  
}
*/

// print 2D array
for (int row = 0; row < 3; row++){ 
    for (int column = 0; column < 4; column++)  
    {
        cout<<arr[row][column]<<" ";
    }
    cout<<endl;
}


return 0;
} 