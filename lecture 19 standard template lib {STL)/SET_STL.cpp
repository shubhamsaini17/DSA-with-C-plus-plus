#include <iostream>
#include <set>

// SET - only store unique elements
// no modification after insertion
// delete or insert kar sakta ha
// return elemnet in sorted order -- in care of simple set

// 2 types  1- order set / set -- slow as compare to unordeded
//          2- unordered set -- return element random not in sorted order

// same value bar bar dala ge to set usko 1k value bana de  5,5,5,5 --> 1 time 5

using namespace std;
int main()
{

    set<int> set1; // return elements in sorted order {because simple set is like ordered SET}

    set1.insert(5); // O(log n) time
    set1.insert(5);
    set1.insert(5);
    set1.insert(3);
    set1.insert(3);
    set1.insert(3);
    set1.insert(1);
    set1.insert(10);

    for (auto i : set1)
    {
        cout << i << endl;
    }
    cout << endl;

    set1.erase(set1.begin()); // delete the first element after sorting

    for (auto i : set1)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = set1.begin(); // iterator / like pointer on begin so delete first element
    it++;                                 // it = it+1 iterator on second place so reomve second element

    set1.erase(it);

    for (auto i : set1)
    {
        cout << i << endl;
    }
    cout << endl;


    // count -- koi elemnt set ma present ha ya nhi

    cout<<" 5 is present or not: "<<set1.count(5)<<endl;
    cout<<" -5 is present or not: "<<set1.count(-5)<<endl;

    // find -- 

       set<int>::iterator itr = set1.find(5);  // iterator() method is used to return an iterator of the same elements as the set. The elements are returned in random order from what present in the set.

       for(auto it=itr; it!=set1.end(); it++ ){
        cout<<*it<<" ";
       }cout<<endl;
    return 0;
}