#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{10,1,7,6,14,9};
    int n=arr.size();
    // insertion sort
    for (int round = 1; round<n; round++)
    {
        // step A = Fetch
        int val= arr[round];
        // step B= compare
int j = round-1;
        for ( ;j>=0; j--)
        {
            if (arr[j]>val)
            {
                // c= shift
                arr[j+1]=arr[j];
            }
           else
           {
            
            // rukna hai
            break;
           }
            
        }
        // step D= copyint j= round-1;
        arr[j+1] =val;


    }
    // prinyting
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}