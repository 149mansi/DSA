// Find maximum number Aarray traverse
#include<iostream>
#include<limits.h>
using namespace std;
using namespace std;
// void findMaxi(int arr[],int n, int i, int maxi){// int maxi is pass by value hogya isliye o/p globla value print ho rhe hai so we will be use 
    void findMaxi(int arr[],int n, int i, int& maxi){ // now int&maxi is pass by refernce so its give maximum value
    // base case
    // array agar khatm hogya,poora travers hogya toh waps aajao
    if (i>=n)
    {
        return;
    }
    // ek case solve karne hai 
    // current elemnt ko check karo for max
    if (arr[i]>maxi)
    {
        maxi=arr[i];
    }
    // baaki recursion smabhla lenga
    findMaxi(arr,n,i+1,maxi);
    
}


void findMin(int arr[],int n, int i, int& mini){
    // base case
    if (i>=n)
    {
    return;
    }
    
    // ek solve krna hai
    mini =min(mini,arr[i]);
    // baki recusrion smabla lenga
    findMin(arr,n,i+1,mini);

}



int main(){
    int arr[]={10,20,44,32,66,19,27,88};
    int n=8;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int i=0;
    findMaxi(arr,n,i,maxi);
    findMin(arr,n,i,mini);
    cout<<"Maximum number is"<<maxi<<endl;
    cout<<"Minium  number is"<<mini<<endl;
    return 0;
}