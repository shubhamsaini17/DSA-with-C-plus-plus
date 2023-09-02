#include<iostream>
using namespace std;
void update(int a){  // function pass by value - yaha pa update function {a} variable ki a copy create kar le ga to main k andar actual value of {a} change nhi hogi
    a = a/2;
}

int main()
{
int a =10;
update(a);
cout<<a<<endl;

return 0;

}