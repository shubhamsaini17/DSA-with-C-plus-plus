#include<iostream>
using namespace std;

void merge2Array(int nums1[],int m,int nums2[],int n)
{
        int i = 0, j = 0,k=0;

        int nums3[m+n];
        while(i<m && j<n) {
            if(nums1[i]>nums2[j]) {
                nums3[k] = nums2[j];
                j++;
                k++;
            }
            else {
                nums3[k] = nums1[i];
                i++;
                k++;
            }
        }
        while(i<m) {
                nums3[k] = nums1[i];
                i++;
                k++;
            }
        while(j<n) {
            nums3[k] = nums2[j];
            j++;
            k++;
        }
        for(i=0;i<m+n;i++) {
            nums1[i] = nums3[i];
        }
        }
void printMergedArray(int nums1[],int m){
    for (int  i = 0; i <m; i++)
    {
        cout<<nums1[i]<<" ";
    }
}
int main()
{

  int nums1[8]={1,3,5,7,9};
  int nums2[3]={2,4,6};

    merge2Array(nums1,5,nums2,3);
       printMergedArray(nums1,8);



return 0;
}