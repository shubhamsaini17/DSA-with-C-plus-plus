#include<iostream>
#include<list>  //library

using namespace std;

// we implement or use doublly link list to implement STL list
//direct / random acces not possible
// 
int main()
{

list<int> l;

l.push_back(2);
l.push_front(7);

for (int i:l)
{
    cout<<i<<" ";
}cout<<endl;

// l.pop_back();
// l.pop_front();

list<int> new_list(5,100); // list of size 5 , all elemnet intilize by 100 5 times
for (int i:new_list)
{
    cout<<i<<" ";
}cout<<endl;

list<int> list(l); // l list --> new kist k anadar copy ho jaya ge
cout<<"elemnt of list 'l' copy in list 'list'"<<endl;
for (int i:list)
{
    cout<<i<<" ";
}cout<<endl;

// erase

cout<<"before erase:"<<endl;
for (int i:list) 
{
    cout<<i<<" ";
}cout<<endl;
 
  //      (jo bracket ma hoga us index no. vala delete ho jaya ga)
list.erase(list.begin()); 

// kha se kha tak delete karna ha
// list.begin() sa lakar list.begin()+1 tak
// list.erase(list.begin(),list.begin()+1);


cout<<"after erase:"<<endl;
for (int i:list) 
{
    cout<<i<<" ";
}cout<<endl;

// size of list

cout<<"size of list--> "<<list.size()<<endl;
return 0;
}