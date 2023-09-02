#include<iostream>
using namespace std;

void counting(int n){
    // base condition/case
    if(n==0){
        return;
    }
 // recursion relation
//  counting(n-1);
//    cout<<n<<endl;    --->  sidi counting
   
//    recursion relation
   cout<<n<<endl;  //  --->  ulti counting
 counting(n-1);
   

    }

int main()
{

int n;
cin>>n;

counting(n);

return 0;
}