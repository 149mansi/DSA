// sort 0 and 1
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>arr{0,1,0,1,0,1,1,0,0,1};
//     int start=0;
//     int end =arr.size() -1;
//     // element ko traverse karne ke liye i ka use kar rhe hai
//     int i=0;
//     while (i!= end)
//     {
//         if (arr[i]==0)
//         {
//     swap(arr[start],arr[i]);
//     start++;
//     i++;
//     }
//     else
//     {
//         swap(arr[end],arr[i]);
//         end--;
//     }
//      }
    
// for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,0,1,1,0,1,1,0,0,0};
    int start;
    int end=arr.size()-1;
    int i=0;

    while (i!=end)
    {
        
        if (arr[i]==0)
        {     
            swap(arr[start],arr[i]);
            start++;
            i++;
           }
           if (arr[i]==1)
           {
            swap(arr[i],arr[end]);
            end--;
           }
           }
            for (int i = 0; i < arr.size(); i++)
           {
            cout<<arr[i]<<" ";
           }
           
    
}