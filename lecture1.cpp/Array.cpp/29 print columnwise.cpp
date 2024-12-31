#include<iostream>
#include<vector>
using namespace std;
void printRowArray(int arr[][3],int rows,int cols){
    // row sum-> row wise traverse
    cout<<"printing row wise sum"<<endl;
    for (int i = 0; i < rows; i++)
    {
        int sum=0;
        for (int j = 0; j < cols; j++)
        {
        sum = sum +arr[i][j];
        }
      cout<<sum<<endl;  
    }
    
}
int main(){
    int arr[3][3];
    int rows=3;
    int column=3;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
        cin>>arr[i][j];
        }
        
    }
    // printing
    cout<<"column wise printing"<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j= 0; j <column; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    printRowArray(arr,rows,column);
}