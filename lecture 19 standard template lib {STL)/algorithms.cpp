#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{

vector<int> v;

// insert element is sorted order because binary searc hwork on sorted order elements

v.push_back(1);
v.push_back(3);
v.push_back(5);
v.push_back(8);
v.push_back(10);


// searching

cout<<"finding 8 --> "<<binary_search(v.begin(),v.end(),8)<<endl;  //if present it give 1{true}
// begin - starting se end tak search karo , 8 ko

// both below statment give value of iterator
cout<<"lower bound--> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
cout<<"upper bound--> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

int a=13;
int b=45;

cout<<"max --> "<<max(a,b)<<endl;
cout<<"min --> "<<min(a,b)<<endl;

swap(a,b);
cout<<"a: "<<a<<"B: "<<b<<endl;

string abcd = "abcd";
reverse(abcd.begin(),abcd.end());

cout<<"reverse string: "<<abcd<<endl;


// rotate the vector

rotate(v.begin(),v.begin()+1 , v.end());
cout<<"after rotate: "<<endl;

for(int i:v){
    cout<<i<<" ";
}cout<<endl;

// sort function
// -- based on intro sort -- combination of 3 algorithms  insertion sort , quick sort , heap sort 
cout<<" sorting algorithms"<<endl;
sort(v.begin(),v.end());
for(int i:v){
    cout<<i<<" ";
}
return 0;
}