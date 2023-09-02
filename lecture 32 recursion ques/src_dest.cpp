#include<iostream>
using namespace std;

void returnHome(int src ,int dest){
        cout<<src<<" "<<dest<<endl;
    
    if(src == dest){
        cout<<"yea ham ghar pohach gya"<<endl;
        return;
    }
    // processing
    src++;

    // recursion call
    returnHome(src ,dest);
}

int main()
{

int src =1;
int dest =10;

returnHome(src,dest);

return 0;
}