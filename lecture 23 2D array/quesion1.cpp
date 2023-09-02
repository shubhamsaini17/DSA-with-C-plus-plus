// - Wave Print: https://bit.ly/329Le3K

#include <bits/stdc++.h> 
using namespace std;


vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{   
    vector<int> ans;
      for (int column = 0; column < mCols; column++)  {
        if(column&1){
            // means odd case
            for(int row=nRows-1; row>=0; row--){

                // cout<<arr[row][column]<<" ";
                ans.push_back(arr[row][column]);
            }
        }
        else
        {   // column is even
            for (int row = 0; row < nRows; row++) {

                // cout<<arr[row][column]<<" ";
                ans.push_back(arr[row][column]);
            }
        }
      }

return ans;

}

int main()
{


return 0;
}