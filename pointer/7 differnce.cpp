#include<iostream>
using namespace std;
int main(){

    //1 differnce of size 
    // array should be change all time of size
    int arr[10];
    cout<<sizeof(arr)<<endl;

// poiter have same size always
    int*P= arr;
    cout<<sizeof(P)<<endl;
    cout<<sizeof(*P)<<endl;
    return 0;
}