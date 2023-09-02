#include<iostream>
using namespace std;

auto sayDigits(int n,string arr[]){
    // base case
    if(n==0){
        return;
    }
    // processing
    int digits = n%10;
    n = n/10;

    // recursive call
    sayDigits(n,arr );
    cout<<arr[digits]<<" ";

}

int main()
{

int n;
cin>>n;

string arr[10] = {"zero","one","two","three","four","five","six","seven","eigth","nine"};
sayDigits(n,arr);

return 0;
}