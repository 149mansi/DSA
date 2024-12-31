#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> arr{10,1,7,6,14,9};
int n=arr.size();
// Bubble sort
// for outer loop is for round how many rounds in an array
// if  round start from 1 then 
for (int round = 1; round < n; round++)

// if  round start from 0 then 
// for (int round = 0; round < n-1; round++)
{
// second loop is for round of adjacent elemnet

// if round start 0 then j< n-round-1 hoga
// if round start 1 then j< =n-round-1 hoga

for (int j  = 0; j<=n-round-1; j++)
// if round start 0 then j< n-round-1 hoga
// if round start 1 then j< =n-round hoga

// for (int j  = 0; j<n-round j++)

{
    // if j is grater than j+1 then 
    if (arr[j]>arr[j+1])
    {
        swap(arr[j],arr[j+1]);
    }
    
}

}
// ptint
for (int i = 0; i < n; i++)
{
    cout<< arr[i]<<" ";
}
cout<<endl;

return 0;
}

// 