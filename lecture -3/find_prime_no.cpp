#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int count = 2;
    while (count < num)
    {
        if (num%count == 0)
        {
            cout << "not prime " << endl;
            break;
        }
        else
        {
            cout << "prime " << endl;
            break;
        }
        count++;
    }
    return 0;
}