#include <iostream>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i < (num - 1); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int no;
    cin >> no;

    isPrime(no);
    if (isPrime(no))
    {
        cout << " is a prime no. " << endl;
    }
    else
        cout << " not a prime no. " << endl;

    return 0;
}