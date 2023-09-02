#include<iostream>
using namespace std;
int main()
{

int n= 10;

int a= 0;
int b= 1;
cout<<a<<" "<<b<<" ";
for(int i=1; i<=n; i++){

    int nextNumber = a+b;
    cout<<nextNumber<<" ";
    // next no. = (n-1) + (n-2) {sum of previous 2 numbers}
    a=b;
    b=nextNumber;

}


return 0;
}