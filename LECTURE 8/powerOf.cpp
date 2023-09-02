#include<iostream>
#include<math.h>
using namespace std;

int powerof(int num1, int num2){

int answer = pow(num1,num2);
return answer;


}

int power(int num1, int num2){

int answer = 1;
while (num2!=0)
{    answer =answer*num1;

}

return answer;


}

int main()
{

int a,b;
cin>>a>>b;


cout<<a<<" power of " << b<<" is "<<powerof(a,b)<<endl;
cout<<power(a,b);

return 0;
}