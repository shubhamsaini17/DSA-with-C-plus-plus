#include<iostream>
using namespace std;

int nthTerm(int n){
    int ap = (3*n+7);
    return ap;
}

int main()
{
int term;
cout<<"which term you want to find of the A.P (3 x n + 7): "<<endl;
cin>>term;

cout<<nthTerm(term);

return 0;
}