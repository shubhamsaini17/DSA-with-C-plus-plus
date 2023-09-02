#include<iostream>
#include<deque>

using namespace std;

int main()
{

// DEQUE - double ended queue 
//        - deletion , insertion can possible from both end {aga ,picha se}
//     random access possible
//   use fix satatic array to implement it
//   size can increase- dyanamic


    deque<int> d;

d.push_back(1); // picha se element insert
d.push_front(2); // aga se eleemnt insert

cout<<" after push: "<<endl;
for (int i:d)
{
    cout<<i<<" ";
}cout<<endl;

/*
d.pop_back(); // == picha se delete 
d.pop_front(); //== aga se delete
cout<<" after pop: "<<endl;
for (int i:d)
{
    cout<<i<<" ";
}

*/

cout<<"front elemnt: "<<d.front()<<endl;
cout<<"back elemnt: "<<d.back()<<endl;

d.begin();
d.end();

// cout<<"back elemnt: "<<d.end()<<endl;
cout<<"empty or not: 0 means false: -->  "<<d.empty()<<endl;

// delete

cout<<"size before ERASE: "<<d.size()<<endl;

// kha se kha tak delete karna ha
// d.begin() sa lakar d.begin()+1 tak
 d.erase(d.begin(),d.begin()+1);

cout<<"size after ERASE: "<<d.size()<<endl;

// size - after clear 0
// max size / capapcity / memory allocater  to dque remanin same

for (int i:d)
{
    cout<<i<<" ";
}cout<<endl;

return 0;
}