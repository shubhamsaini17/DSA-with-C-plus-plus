#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"enter the value of N" <<endl;
cin>>n;

bool isPrime = 1; //true(1) assume prime no. ha

for (int i = 2; i < n; i++)
{       // reminder =0 , not a prime 
        // rem !=0
    if (n%i==0)
    {
        // cout<<n<<" is not a prime no"<<endl;
        isPrime=0; // asuume prime no. ha
        break;
    }
}

// loop k bhar check prime no. ha  ya nhi
if (isPrime==0)
{
    cout<<n<<" is not a prime no"<<endl;
}else
    cout<<n<<" is a prime no"<<endl;



return 0;
}