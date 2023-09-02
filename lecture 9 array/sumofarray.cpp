#include <iostream>
using namespace std;

int sumOfarr(int array[], int size)
{   int sum=0;
    for (int i = 0; i < size; i++)
    {
       sum+=array[i];
    }
    return sum;
}

int main()
{
    int size;
    cout<<"size of array: "<<endl;
    cin >> size;

    int num[100]; // array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout<<"sum of all elements of array is: "<<sumOfarr(num,size)<<endl;
    return 0;
}