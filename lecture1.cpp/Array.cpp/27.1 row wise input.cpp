// printing row wise with taking input
#include<iostream>
using namespace std;
int main(){
    
    int arr[4][3];
    int rows=4;
    int col=3;

    // input
    // row wise input
     
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
        cin>>arr[i][j];
        }
    
    }
    cout<<"printing row wise"<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}