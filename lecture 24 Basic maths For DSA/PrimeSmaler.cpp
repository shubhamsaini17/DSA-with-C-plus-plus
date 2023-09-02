// find all the prime number less then given number
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

int countPrime(int n){
    int count=0;
        
    for (int i = 2; i < n; i++)
    {
        if(isPrime(i)){
            count++;
        }
    }
    return count;
    }

int main()
{
int num;
cin>>num;

cout<<countPrime(num)<<endl;

return 0;
} 


/// par ya bade numbers ka lea TIME LIMIT EXIDE {TLE} dika da ga 
// is lea ham SIEVE OF ERATOSTHERES Algo use kra ga -- count prime no. 