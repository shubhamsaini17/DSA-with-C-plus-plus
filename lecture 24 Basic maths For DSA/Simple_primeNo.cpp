#include<iostream>
using namespace std;

bool isPrime(int number){

    if(number<=1){
        return false;
    }
    for (int i = 2; i < number-1; i++)
    {
        if(number%i==0){
            return false;
        }
    }
    
return true;

}

int main()
{
int num;
cin>>num;

if (isPrime(num))
{
    cout<<"is a pime no"<<endl;
}
else
{
      cout<<"Not a pime no"<<endl;
}


return 0;
}