// first occurance of number
// #include<iostream>
// #include<vector>
// using namespace std;
// int firstOcc(vector<int>arr,int target){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while (s<=e){
//     if (arr[mid]==target)
//     {
//     // ans store
//     ans=mid;
//     // left search
//     e=mid-1;
//     }
//     else if(target<arr[mid])
//     {
//         // left me search
//         e=mid-1;
//     }
//     else if(target>arr[mid])
//     {
//         // right search
//         s=mid+1;
//     }
//     mid = s+(e-s)/2;
// }
// return ans;
// }
// int main(){
// vector<int> v{1,2,2,2,2,3,3,3,3,3,3,6,7};
// int target=2;
// int ans=firstOcc(v,target);
// cout<<"ans is "<<ans<<endl;
// return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
int firstOcc(vector<int>arr, int target){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while (s<=e)
    {
        
        if (arr[mid]==target)
        {
            ans=mid;
            e=mid-1;
        }
        else if (target<arr[mid])
        {
        e=mid-1;
        }
       else
       {
        s=mid+1;
       }
    mid=s+(e-s)/2;
    }
    return ans;


}

int main(){
vector<int> v{1,1,2,2,2,2,3,3,3,4};

int target=2;
int ans=firstOcc(v,target);
cout<<"ans is"<<ans<<endl;
return 0;
}