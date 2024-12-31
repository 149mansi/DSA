#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{4,7,2,1,6,9};
    int n=arr.size();
    for (int round = 1; round < n; round++)
    {
        for (int j = 0; j< n-round-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
              swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    // print
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}