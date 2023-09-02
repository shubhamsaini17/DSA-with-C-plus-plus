#include <iostream>
using namespace std;
int main()
{
    int find;
    cout << "which element you want to search: " << endl;
    cin >> find;

    int num[100] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1}; // array   // not work if values in array repeated

    // find no. 1 present in array or not

    for (int i = 0; i < 100; i++)
    {
        if (num[i] == find)
        {
            cout <<find<< " is present in array at index: " << i; 
            break;
        }
    }
    return 0;
}