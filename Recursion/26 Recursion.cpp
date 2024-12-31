// print all subarray using RE
#include<iostream>
#include<vector>
using namespace std;
void printsubArray_util(vector<int>&nums, int start, int end){
    // base case
if (end==nums.size())
{
    return;
}


    // ek case
    for (int i= start; i <=end; i++)
    {
      cout<<nums[i]<<" ";
    }
    cout<<endl;

    // RE call
    printsubArray_util(nums, start, end+1);
}
void printSubarray(vector<int>&nums){
    for (int start = 0; start < nums.size(); start++)
    {
        int end=start;
        printsubArray_util(nums, start, end);
}
    }
    

int main(){
    vector<int>nums{1,2,3,4,5};
printSubarray(nums);
    return 0;

}