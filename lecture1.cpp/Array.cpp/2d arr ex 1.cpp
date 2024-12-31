#include<iostream>
#include<vector>
using namespace std;
void printrRowwiseSum(int arr[][3], int rows,int coulumn){
    // row sum-> row wise traverse
    cout<<"printing row wise "<<endl;
    for (int i = 0; i <rows; i++)
    {
        int sum=0;
        for (int j = 0; j < coulumn; j++)
        {
            sum  = sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
    }
int main(){
    int arr[3][3];
    int rows=3;
    int columns=3;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j< columns; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
printrRowwiseSum(arr, rows,columns);
}