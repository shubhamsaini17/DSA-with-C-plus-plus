#include<iostream>
#include<map>

using namespace std;

// map is a datastructure

// -- data store in key, values
// shubham{key}  --> fortuner {value}

// one key can point one value only
// 
int main()
{

map<int,string> m;


// insert
m[1] = "shubham";
m[2] = "saini";
m[13] = "king";

// insert method 2
m.insert({5,"bheem"});


cout<<" before erase"<<endl;
for (auto i:m) 
{
    cout<<i.first<<" "<<i.second<<endl;
}

cout<<"finding 13 --> "<<m.count(13)<<endl; // count means 13 present or not

cout<<"finding -13 --> "<<m.count(-13)<<endl;

m.erase(13);

cout<<" after erase"<<endl;
for (auto i:m) 
{
    cout<<i.first<<" "<<i.second<<endl;
}

auto it = m.find(5); // to find itreator

for (auto i=it; i!=m.end(); i++) 
{
    cout<<(*i).first<<endl;
}  


return 0;
}