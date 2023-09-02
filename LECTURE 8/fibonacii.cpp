#include <iostream>
using namespace std;

int main()
{
    int t1 = 0;
    int t2 = 1;
    int nextterm;
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << t1 << endl;
    }
    if (n == 2)
    {
        cout << t2 << endl;
    }

    for (int i = 1; i <= n - 2; i++)
    {
       nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }
    if (n != 1 && n != 2)
    {
        cout << nextterm;
    }
    return 0;
}