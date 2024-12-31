#include<iostream>
using namespace std;
void Transpose(int arr[][3], int row,int col,int transpose[][3]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
        transpose[j][i]=arr[i][j];
        }
        
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j= 0; j < col; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
}
int main(){
    int arr[3][3];
    int row=3;
    int col=3;
    int transpose[3][3];
    for (int i = 0; i < row; i++)
    {
        for (int j= 0; j < col; j++)
        {
            cin>>arr[j][i];
        }
        
    }
    Transpose(arr,row,col,transpose);
}


// void transpose(int arr[][3],int r, int c, int transpose)
// {
//     for (int i = 0; i < r; i++)
//     {
//     for (int j = 0; j < c; j++)
// {
// transpose[j][i]=arr[i][j];
//     }
    
//     }
    
// }
// void printArray(int arr[][3],int r,int c){
//     for (int i = 0; i < r; i++)
//     {
//         for (int j= 0; j < c; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
// }