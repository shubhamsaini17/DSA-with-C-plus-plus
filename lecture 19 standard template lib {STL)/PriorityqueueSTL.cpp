#include<iostream>
#include<queue>
using namespace std;

// PRIORITY QUEUE - like max HEAp , OR MIN Heap

// ya to sasbasa bada vala element top pa 
// ya sabsa chota vala element top pa

// jab remove kra ga ya to 
// SABSA    PHELA  sabsa bada remove ,fir uss se chota chota...
// ya sabsa chota reomve ,fir usa bada bada...

int main()
{

    priority_queue<int> max_heap;  // default max heap

    
    // for min - heap
    priority_queue<int,vector<int> , greater<int>> min_heap;


    //data push
    max_heap.push(1);
    max_heap.push(0);
    max_heap.push(4);
    max_heap.push(10);


    cout<<"size of max heap: "<<max_heap.size()<<endl;

    //  print element
    // max heap ma return kra ga sabsa bada fir chota -----

    int n=max_heap.size();

    for (int i = 0; i < n; i++)
    {
        cout<<max_heap.top()<<" ";
        max_heap.pop(); 
        // print kara na ka baad max element pop karna padaga , kyo ki isma pointer sirf max element ko point karta ha , to ham random elemnt nhi print kara sakta 
        // uska lea hama ak print kararaya ge ,fir usa pop , fir jo next highest element hoga wo print hoga
    }
    cout<<endl;




     //data push
    min_heap.push(10);
    min_heap.push(2);
    min_heap.push(5);
    min_heap.push(0);


    cout<<"size of min heap: "<<min_heap.size()<<endl;

    //  print element
    // min heap ma return kra ga sabsa chota , fir usa bada -----


    int m=min_heap.size();

    for (int i = 0; i < m; i++)
    {
        cout<<min_heap.top()<<" ";
        min_heap.pop(); 
 
    }cout<<endl;

    cout<<"khali ha kya ha bhai--> "<<min_heap.empty()<<endl;


return 0;
}