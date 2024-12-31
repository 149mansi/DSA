#include<iostream>
#include<vector>
using namespace std;
void printcolwisearr(int arr[][3],int row, int col){
    cout<<"printing column wise sum"<<endl;
    for (int i = 0; i < row; i++)
    {
        int sum=0;
        for (int j = 0; j < col; j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
    
}
int main(){
    int arr[3][3];
    int row=3;
    int col=3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[j][i];
        }
        
    }
    // 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j< col; j++)
        {
            cout<<arr[i][j];
        }
        
    }
   printcolwisearr(arr,row,col) ;
}