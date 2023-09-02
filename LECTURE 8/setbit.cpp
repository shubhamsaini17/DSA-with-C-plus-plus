#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int a,b;
    cin >> a>>b;
    int setbit = 0;

  while(a!=0 )
    {   
        if (a&1==1)
        {
            setbit++;
        }
        a= a >> 1;
    }
     while(b!=0 )
    {   
        if ( b&1==1)
        {
            setbit++;
        }
        b= b >> 1;
    }
    cout << setbit << endl;
    }

// or

// #include<iostream>
// using namespace std;


// int main(){

//     int a,b;
//     cout<<"enter two numbers:"<<endl;
//     cin>>a>>b;

//     int set =0;

//     while(a!=0 || b!=0 ){
        
//         if(a&1==1 || b&1==1)
//         {
//             if(a&1==1 && b&1==1){
//                 set=set+1;
//             }
//             set=set+1;
           
//         }
//          a=a>>1;
//             b=b>>1;
       
//     }
//     cout<<"the total no of set bits are:"<<set;
// }
