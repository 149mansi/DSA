// row wise sum
// #include<iostream>
// #include<vector>
// using namespace std;
// void Printvoidarr(int arr[][3], int rows, int columns){
// // printing row wise traverse
// cout<<"printing rowwise sum"<<endl;
// for (int i = 0; i < rows; i++)
// {
//     // starting me sum zero hoga
//     int sum=0;
//     for (int j= 0; j< columns; j++)
//     {
//         sum=sum+arr[i][j];
//     }
//     cout<<sum<<endl;
// }

// }
// int main(){
//     int arr[3][3];
//     int rows=3;
//     int columns=3;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             cin>>arr[i][j];
//         }
        
//     }
//     // printing rows wise traverse
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j= 0; j< columns; j++)
//         {
//             cout<<arr[i][j];
//         }
        
//     }
// Printvoidarr(arr, rows, columns);
// }


// without taking input

// #include<iostream>
// using namespace std;
// void printsum(int arr[][3]){
// for (int i = 0; i < 3; i++)
// {
//     int sum=0;
//     for (int j = 0; j < 3; j++)
//     {
//         sum=sum+arr[i][j];
//     }
//     cout<<sum<<endl;
// }

// }
// int main(){
//     int arr[3][3]={
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout<<arr[i][j];
//         }
//        cout <<" "<<endl; 
//     }
//     printsum(arr);
// }


// with taking input cols print
#include<iostream>
using namespace std;
void printsum(int arr[][3],int rows,int cols){
    for (int i = 0; i < rows; i++)
    {
        int sum=0;
        for (int j = 0; j < cols; j++)
        {
        sum=sum+arr[j][i];
        }
        cout<<sum<<endl;
    }
    
}
int main(){
    int arr[3][3];
    int rows=3;
    int cols=3;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i <rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[j][i];
        }
        cout<< endl;
    }
    printsum(arr,rows,cols);
}