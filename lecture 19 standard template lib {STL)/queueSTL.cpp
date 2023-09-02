#include<iostream>
#include<queue>

using namespace std;

// first in first out {FIFO}

int main()
{

    queue<string> queue1;

    queue1.push("shubham");
    queue1.push("saini");
    queue1.push("king");

    cout<<"first element:  "<<queue1.front()<<endl;
    cout<<"defore pop last element:  "<<queue1.back()<<endl;
    cout<<"defore pop size:  "<<queue1.size()<<endl;
    queue1.pop(); // fifo -- delete from front only
    cout<<"after pop first element:  "<<queue1.front()<<endl;
   cout<<"after pop last element:  "<< queue1.back()<<endl;
    cout<<"after pop size:  "<<queue1.size()<<endl;
    
    // queue1.empty();
return 0;
}