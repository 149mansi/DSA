#include<iostream>
using namespace std;

// void print(int arr[], int n,int start)

// deaflut arguments always start with rightmost element just like do void print(int arr[], int n, int start=0) don not do void print(int arr[], int n=0, int start)
void print(int arr[], int n, int start=0){//default arugument
    for (int i = start; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int main(){
    int arr[]={1,4,7,8,9};
    int size=5;
//  print(arr,size,0);

// defalult arugment: when not get the starting value of arr
print(arr,size);
 return 0;
}