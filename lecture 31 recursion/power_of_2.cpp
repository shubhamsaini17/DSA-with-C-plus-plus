#include<iostream>
using namespace std;

int power(int n){
    // base condition/case
    if(n==0){
        return 1;
    }
 
    // int smallerProblem = power(n-1);
    //  int bigProblem = 2 * smallerProblem;

    // return bigProblem;
    
    //or

    return 2 * power(n-1);
}

int main()
{

int n;
cin>>n;

int ans = power(n);
cout<<"2 power "<<n<<" is: "<<ans<<endl;

return 0;
}