// // selaction sort
// #include<iostream> 
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr{5,4,3,2,1};
//     int n= arr.size();
//     // selction sort
//     // how many times code will be run
//     // outer loop -> (n-1) rounds
//     for (int i = 0; i < n-1; i++)
//     {
//         // jis element pe kade ho use minimum number consider karo and then search samne vale element
//     int minIndex=i;
//     // inner loop -> index of minimum element in range i>n
// for (int j = i+1; j < n; j++)
// {
// if (arr[j]<arr[minIndex])
// {
//     // new minmum then store
//     minIndex = j;
// }

// }
// // when we find minimum number then swap the number
// swap(arr[i],arr[minIndex]);
//     }
//     // printing
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// selaction sort
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector <int> arr{7,3,2,9,1,0};
// int n= arr.size();
// for (int i = 0; i < n-1; i++)
// {
//     int minIndex=i;
//     for (int j = i+1; j <n; j++)
//     {
//         if (arr[j]< arr[minIndex])
//         {
//             minIndex=j;
//         }
        
//     }
//     swap(arr[i],arr[minIndex]);

// }
// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr{6,3,4,2,1,0};
//     int n=arr.size();
//     for (int i = 0; i < n-1; i++)
//     {
//      int minIndex=i;
//      for (int j =i+1; j <n; j++)
//      {
//     if (arr[j]<arr[minIndex])
//     {
//         minIndex=j;
//     }
    
//      }
//      swap(arr[i],arr[minIndex]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//     cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int> arr{8,2,4,1,9,3};
// int n= arr.size();
// for (int round= 1; round < n; round++)
// {
//     for (int j = 0; j<= n-round-1; j++)
//     {
//         if (arr[j]>arr[j+1])
//         {
//             swap(arr[j],arr[j+1]);
//         }
        
//     }
//     // print
    
// }
// for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr{5,2,3,9,1};
//     int n=arr.size();
//     for (int round = 1; round <n; round++)
//     {
//     int val=arr[round];
//     int j = round-1;
//     for (; j>=0; j--)
//     {
//         if (arr[j]>val)
//         {
//             arr[j+1]=arr[j];
//         }
//         else
//         {
//             break;
//         }
        
//     }
//     arr[j+1]=val;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossibleSolution(vector<long long>trees, long long int m, long long mid)
{
    long long int woodCollected =0;
    for (int i = 0; i < trees.size(); i++)
    {
        if (trees[i]>mid)
        {
            woodCollected+= trees[i]-mid;
        }
        
    }
    return woodCollected >=m;
}
long long maxSawBladeHeight(vector<long long> trees, long long int m)
{
    long long int start =0, end ,  ans=-1;
   end = *max_element(trees.begin(),trees.end());
    while (start <= end)
    {
        long long int mid = start +(end-start)/2;
        if (isPossibleSolution(trees,m,mid))
        {
    ans=mid;
    start = mid+1;
        
    }
    else
    {
        end=mid-1;
    }
    
}
return ans;
}
int main(){
    long long int n,m;
    cin>>n>>m;
    vector<long long int> trees;
    while (n--)
    {
     long long int height;
     cin>>height;
     trees.push_back(height);
    }
    cout<<maxSawBladeHeight(trees,m)<<endl;
}