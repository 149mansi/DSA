// row wise input
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // row wise input
    int arr[4][3];
    int rows=4;
    int column=3;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j< column; j++)
        {
            
            cin>>arr[i][j];
        }
        
    }
    // printing
    cout<<"printing rows "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <column; j++)
        {
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}