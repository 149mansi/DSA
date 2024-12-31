// selaction sort
#include<iostream> 
#include<vector>
using namespace std;
int main(){
    vector<int> arr{5,4,3,2,1};
    int n= arr.size();
    // selction sort
    // how many times code will be run
    // outer loop -> (n-1) rounds
    for (int i = 0; i < n-1; i++)
    {
        // jis element pe kade ho use minimum number consider karo and then search samne vale element
    int minIndex=i;
    // inner loop -> index of minimum element in range i>n
for (int j = i+1; j < n; j++)
{
if (arr[j]<arr[minIndex])
{
    // new minmum then store
    minIndex = j;
}

}
// when we find minimum number then swap the number
swap(arr[i],arr[minIndex]);
    }
    // printing
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}