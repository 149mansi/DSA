// why array is pass by refernce because in array pointer will be pass 
#include<iostream>
using namespace std;
void solve(int arr[]){
    cout<<"size insise solve function "<<sizeof(arr)<<endl;
}
int main(){
    int arr[10]={1,2,3,4};
    cout<<"size inside of main function"<<sizeof(arr)<<endl;

    // pass the function
    solve(arr);
    return 0;
}