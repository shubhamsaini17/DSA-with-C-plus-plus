#include<iostream>
#include<vector>

using namespace std;

vector<int> reverseArray(vector <int> array)
{
    int start=0;
    int end=array.size()-1;
    
    while (start<=end)
    {
        swap(array[start],array[end]);
        start++;
        end--;
    }
    return array;
}
vector<int> printvector(vector <int> ans){
    for (int  i = 0; i <ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }
}

int main()
{

  vector<int> arr = {54,21,85,3,32,5};

    // can also insert emelent in vector like that

  /* 
     arr.push_back(11);
    arr.push_back(1);
    arr.push_back(10);
   */ 


      for (int  i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"after swap"<<endl;

  vector<int> ans=  reverseArray(arr);

    // for (int  i = 0; i <ans.size() ; i++)
    // {
    //     cout<<ans[i]<<" ";
    // }

    printvector(ans); //  calling function to print vector
    

return 0;
}