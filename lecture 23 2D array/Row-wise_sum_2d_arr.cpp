#include <iostream>
using namespace std;

// printing the row-wise sum of rows of 2d array
void PrintSumRow(int arr[][3], int row, int column)
{
    int largestSum = 0, rowNo = 0; // OR {int largestSum= INT16_MIN } intitialize to minimum value
    cout << "printing the sum of rows of 2d array" << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int column = 0; column < 3; column++)
        {
            sum = sum + arr[row][column];
        }
        if (largestSum < sum)
        {
            largestSum = sum;
            rowNo = row;
        }

        cout << sum << endl;
    }
    cout << "row no. " << rowNo << " is with highest sum: " << largestSum << endl;
}

// int largestRowSum(int arr[][3], int row, int column){
// int LargestSumRowNo =INT16_MIN , LargestSumInRow=0;
//  for (int row = 0; row< 3; row++)
//  {  int sum=0;
//     for (int column = 0; column < 3; column++)
//     {
//         sum += arr[row][column];
//     }
//     if (LargestSumInRow<sum)
//     {
//         LargestSumInRow=sum;
//         LargestSumRowNo=row;

//     }
//       cout << sum << endl;
//     }
//      cout <<"row no. "<<LargestSumRowNo<<" is with highest sum: "<< LargestSumInRow << endl;
// }
// printing the column-wise sum of column of 2d array

void PrintSumColumn(int arr[][3], int row, int column)
{
    cout << "printing the sum of columns of 2d array" << endl;
    int LargestColSum = 0, LargestSumColNo = 0;
    for (int column = 0; column < 3; column++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum = sum + arr[row][column];
        }
        cout << sum << " ";
        if (LargestColSum < sum)
        {
            LargestColSum = sum;
            LargestSumColNo = column;
        }
    }
    cout << endl;
    cout << "column no. " << LargestSumColNo << " is with highest sum: " << LargestColSum << endl;
}
int main()
{

    int arr[3][3]; // 3 X 3 => 9 so it can store total 12 elements

    // taking row-wise input
    for (int row = 0; row < 3; row++)
    { // 1st for loop for row

        for (int column = 0; column < 3; column++) // 2st for loop for column
        {
            cin >> arr[row][column];
        }
    }

    // print 2D array
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            cout << arr[row][column] << " ";
        }
        cout << endl;
    }

    PrintSumRow(arr, 3, 3);

    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            cout << arr[row][column] << " ";
        }
        cout << endl;
    }

    PrintSumColumn(arr, 3, 3);

    return 0;
}