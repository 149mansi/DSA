// print all pairs
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     // pair sum
//     vector<int>arr{10,20,40,60,70};
//     // print all pairs
//     // outer loop will traverse for each element
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<"We are at element: "<<arr[i]<<endl;
//         int element=arr[i];
//         // for every element ,will traverse on aage vale element
//         for (int j = i+1; j <arr.size(); j++)
//         {
//         cout<<"pair"<<element<<"with"<<arr[j]<<endl;
//         cout<<"("<<element<<" ,"<<arr[j]<<")"<<endl;
//         }
        
//     }
    
// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{10,20,30,40,60,70};

    for (int i = 0; i <arr.size(); i++)
    {
        int element= arr[i];
    
    for (int j= i+1; j < arr.size(); j++)
    {
        cout<<"("<<element<<" ,"<<arr[j]<<")"<<endl;
    }
    }
    return 0;
}