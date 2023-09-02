#include <iostream>
using namespace std;
int main()
{

int n;
cin >> n;
int arr[n]; //= {86 ,5 ,1 ,3,23,8};

for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
                   // or i<=n-1
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {                // current =arr[i]
            if (arr[j] > current)
            {
                // arr[i] = arr[j];
                // arr[i-1 +1] = arr[j+1]
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = current;
    }

   for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}

//    ===== same using while loop ======

/*
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[6]; //= {86, 5, 1, 3, 23, 8};

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

*/