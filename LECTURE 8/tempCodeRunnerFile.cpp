#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int num;
    cin >> num;
    int answer = 0;

  while(num!=0)
    {
        if (num&1==1)
        {
            answer++;
        }
       
          num >> 1;
    }

    cout << answer << endl;
        return 0;
    }
