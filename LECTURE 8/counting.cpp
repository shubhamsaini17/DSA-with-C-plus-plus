#include <iostream>
using namespace std;
// function signature
void printcount(int num)
{
    // function body
    int i = 1;
    while (num != 0)
    {
        cout << i << endl;
        i++;
        num--;
    }
}
int main()
{
    int kah_tak;
    cin >> kah_tak;
    // function call
    printcount(kah_tak);
}