#include <iostream>
using namespace std;

int getmax(int array[], int size)
{
    int max = INT8_MIN;
    for (int i = 0; i < size-1; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
int getmin(int array[], int size)
{
    int min = INT8_MAX;
    for (int i = 0; i < size-1; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cin >> size;

    int num[100]; // array
    for (int i = 0; i < size - 1; i++)
    {
        cin >> num[i];
    }
    cout<<"maximum element is: "<<getmax(num,size)<<endl;
    cout<<"minimum element is: "<<getmin(num,size);
    return 0;
}