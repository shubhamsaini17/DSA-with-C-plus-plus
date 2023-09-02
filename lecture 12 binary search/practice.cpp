#include<iostream>
using namespace std;
int main()
{


int a[6]={90,2,7,9,12,45};

  int max=a[0];
  int min = a[0];
  for(int i=1; i<6; i++){
      if(max<a[i]){
          max = a[i];
      }
      if(min>a[i]){
          min= a[i];
      }
  }
  cout<<min<<" "<<max;

return 0;
}