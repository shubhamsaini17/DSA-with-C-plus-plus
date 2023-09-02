// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     int fib(int n) {
//         if(n==0)
//         return 0;
    
//         if(n==1)
//         return 1;

//         int ans = fib(n-1)+fib(n-2);
//         return ans;
//     }
// };
// int main()
// {
// int n;
// cin>>n;

// Solution s1;
// s1.fib(n);


// return 0;
// }

#include<iostream>
using namespace std;

int main()
{

int n;
cin>>n;
int first =0;
int second = 1;

int ans=0;

int i = 1;

if(n=1){
cout<<"0"<<endl;
}
if(n=2){
cout<<"1"<<endl;
}
while (i<=n)
{
    ans=second+first;
    first = second;
    second= ans;
}

cout<<ans<<endl;
return 0;
}