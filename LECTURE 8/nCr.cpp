#include<iostream>
using namespace std;

int factorial(int num){
  int factorial=1;

for (int i = 1; i <= num; i++)
{
    factorial = factorial *i;
}
return factorial;
}

int nCr(int n , int r){
     int numinator=factorial(n);
     int denominator=factorial(r);
     int n_r = factorial(n-r);
    if(n>r){
    int answer= numinator/(denominator*n_r);
    
    return answer;
    }
}
int main()
{
int n , r;
cin>>n>>r;
cout<<" enter to no. to do ncr "<<endl;
cout<<" nCr is "<<nCr(n,r);

return 0;
}