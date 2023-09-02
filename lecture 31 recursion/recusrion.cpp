#include<iostream>
using namespace std;
int factorial(int n){
    // base condition/case
    if(n==0){
        return 1;
    }
 
    // int smallerProblem = factorial(n-1);
    // int bigProblem = n * smallerProblem;

    // return bigProblem;
    
    //or

    return n * factorial(n-1);
}

int main()
{

int n;
cin>>n;

int ans = factorial(n);
cout<<ans<<endl;

return 0;
}