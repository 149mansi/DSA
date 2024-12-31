// Binary search
// #include<iostream>
// #include<vector> 
// using namespace std;
// int binarySearch(vector<int>v, int s, int e, int target){
//     // base case
//     // case 1> key not fond
//     // s>e invalid array
//     if (s>e)
    
//     return -1;

    

//     int mid = (s+e)/2;
//     // case 2-> key fond
//     if (v[mid]==target)
//     return mid;
//     // v[mid]< key so right me search
//     if (v[mid]<target)
//     {
//         int ans= binarySearch(v,mid+1,e,target);
//         return ans;
//     }
//     else{//v[mid]>target=> left me search
//  int ans = binarySearch(v,s,mid-1,target);
//    return ans;
//     }
    
    
// }
// int main(){
//     vector<int> v{10,20,30,40,60,90,99};
//     int target = 99;
//     int n=v.size();
//     int s=0;
//     int e=n-1;
//     int ans= binarySearch(v,s,e,target);
//     cout<<"Answer is"<<ans<<endl;
// }














// all pass by refrnce 
#include<iostream>
#include<vector> 
using namespace std;
int binarySearch(vector<int>v, int &s, int& e, int target){
    // base case
    // case 1> key not fond
    // s>e invalid array
    if (s>e)
    
    return -1;

    

    int mid = (s+e)/2;
    // case 2-> key fond
    if (v[mid]==target)
    return mid;
    // v[mid]< key so right me search
    if (v[mid]<target)
    {
        s=mid+1;
        int ans= binarySearch(v,s,e,target);
        return ans;
    }
    else{//v[mid]>target=> left me search
    e= mid-1;
 int ans = binarySearch(v,s,e,target);
   return ans;
    }
    
    
}
int main(){
    vector<int> v{10,20,30,40,60,90,99};
    int target = 99;
    int n=v.size();
    int s=0;
    int e=n-1;
    int ans= binarySearch(v,s,e,target);
    cout<<"Answer is "<<ans<<endl;
}