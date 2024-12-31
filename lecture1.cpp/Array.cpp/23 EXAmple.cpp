// if arr given{10,20,30,40,60,70}
// sum=40
// pair of two element{10,30}

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     // pair sum
// vector<int> arr{10,20,30,40,60,70};
// int sum=80;
// // print element
// // outer loop traverse for each element
// for (int i = 0; i <arr.size(); i++)
// {
//  int element=arr[i];
// //  inner loop
// // for every element,treverse on aage vale element
// for (int j = i+1; j < arr.size(); j++)
// {
//     if (element+arr[j]==sum)
//     {
//     cout<<"Pair found: "<<element<<","<<arr[j]<<endl;
//     }
    
// }

// }

// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{10,20,30,40,60,50};
    int sum=110;
    for (int i = 0; i < arr.size(); i++)
    {
        int element=arr[i];
        for (int j = i+1; j < arr.size(); j++)
        {
            if (element+arr[j]==sum)
            {
            cout<<"pair found "<<element<<","<<arr[j]<<endl;
            }
            
        }
        
    }
    
}