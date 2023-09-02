#include <iostream>
using namespace std;
bool checkPalandrome(char str[], int n)
{
    int start = 0;
        int end = n - 1;

    while (start <= end)
    {
            if (str[start] != str[end])
            {
                return 0;
            }
            else {
                start++;
                end--;
            }
        }
        return 1;
}
int length_charArr(char name[])
{
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

int main()
{

    char str[20];
    cout<<"enter string"<<endl;
    cin >> str;
    int length =length_charArr(str);
    cout<<"length of string is: " << length<<endl;

    cout<<"Palandrome Or Not: "<<checkPalandrome(str,length)<<endl;
    return 0;
}
