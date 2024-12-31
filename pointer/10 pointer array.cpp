#include<iostream>
using namespace std;
void solve(int arr[]){
    cout<<"Size inside solve function"<<sizeof(arr)<<endl;
    cout<<"arr"<<arr<<endl;
cout<<"&arr"<<&arr<<endl;
    arr[0]=50;
}
int main(){
    int arr[10]={1,2,3,4};
    cout<<"size insise main function."<<sizeof(arr)<<endl;

cout<<"arr"<<arr<<endl;
cout<<"&arr"<<&arr<<endl;
    // printing array insside the main
    for (int i = 0; i <10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<endl<<endl<<"How calling solve function"<<endl;
    solve(arr);
    cout<<"waps main function me aaye h"<<endl;
    for (int i = 0; i <10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}