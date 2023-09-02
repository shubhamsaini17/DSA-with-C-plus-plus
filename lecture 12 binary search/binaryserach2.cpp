#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2; // same as {(start+end)/2} but we use this to prevent integer overflow

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid; // malab key mid ma he ha to return mid index value
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2; // same as {(start+end)/2} but we use this to prevent integer overflow
    }
    return -1;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter the element you want to search" << endl;
    int key;
    cin >> key;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "sorted array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << key << " is present at index: " << binarysearch(arr, n, key) << endl;
    return 0;
}