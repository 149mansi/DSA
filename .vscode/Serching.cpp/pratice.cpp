#include<iostream>
#include<vector>
using namespace std;
int findpivot(){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if (arr[mid]>arr[mid+1])
        {
          return mid;
        }
        if (arr[mid-1]>arr[mid])
        {
          return mid-1;
        }
        if (arr[s]>=arr[mid])
        {
        // left search
        e=mid-1;
        }
        else
        {
            // right search
            s=mid+1;
        }
        
        
    }
    return -1
}