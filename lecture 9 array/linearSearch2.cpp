#include <iostream>
using namespace std;
//or can use int
bool search(int arr[],int size, int find){

    for (int i = 0; i < size; i++)
    {
        if (arr[i]==find)
        {
            return 1;
        }
    }
    return 0;
}


int main()
{
    int find;
    cout << "which element you want to search: " << endl;
    cin >> find;

    int num[100] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1}; 

    // can also use int/bool
   bool found= search(num,100,find);
    if (found)  // can also write if(found==1)
    {
        cout<<"element is found";
    }
    else
     cout<<"element is not found";
    
    return 0;
}