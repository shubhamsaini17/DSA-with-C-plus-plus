#include<iostream>
#include<math.h>
using namespace std;
int main()
{

int n;
cin>> n;
float answer=0;
int i=0;

while (n!=0)
{
    int bit = n&1; // finding last bit 

    answer = (bit * pow(10,i)) + answer;

    n= n>>1; //right shift binary
    i++;
}

cout<<"Answer is: " << answer<<endl;



return 0;
}
