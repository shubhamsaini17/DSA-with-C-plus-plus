// find all the prime number less then given number
// using efficent method ---> SIEVE OF ERATOSTHERES Algo / Theorm
// time comp:-- o(n*log(log n))
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {

        int count=0;    
        vector<bool> prime(n+1 , true);

        prime[0] =prime[1]=false;

        for(int i=2; i<n; i++){

            if(prime[i]){
                count++;
            }
            for(int j=2*i; j<n; j=j+i){
                prime[j]=false;
            }

        }

        return count;


    }
};

int main()
{


return 0;
}