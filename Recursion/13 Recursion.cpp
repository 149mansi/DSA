#include<iostream> 
#include<vector>

using namespace std;
bool checkSorted(vector<int>&arr,int& n, int i){
    // base case
    if (i==n-1)
    {
        return true;
    }
    // ek solve karne hai baki recursion smable lenga
    if (arr[i+1]<arr[i])
    
     return false;
    
    // baki recursion smable lenga
    return checkSorted(arr, n, i+1);
    
}
int main(){
    vector<int> v{4,3,1,4,4};
    int n=v.size();
    int i=0;
    bool isSorted= checkSorted(v,n,i);
    if (isSorted)
    {
       cout<<"Array is sorted"<<endl;
    }
    else
    {
        cout<<"Array is not sorted"<<endl;
    }
    
    return 0;
}