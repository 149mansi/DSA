// linear searching array
#include<iostream>
#include<vector>
using namespace std;
bool findkey(int arr[][3], int row, int col, int key){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j]==key)
            {
                return true;
                break;
            }
            
        }
    
    }
    // value is not prsent
    
   return false; 
}
int main(){
    int arr[3][3];
    int row=3;
    int col=3;
    for (int i = 0; i < row; i++)
    {
    for (int j = 0; j < col; j++)
    {
        cin>>arr[i][j];
    }
    
    }
    for (int i = 0; i < row; i++)
    {
        for (int j= 0; j < row; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // taking input
    int key;
    cout<<"Enter the key what you want to search: ";
    cin>>key;
    if (findkey(arr,row,col,key))
    {
    cout<<"true"<<endl;;
    }
    else
    {
        cout<<"false"<<endl;;
    }

//     int key=8;
// cout<<findkey(arr,3,3,8);
//     return  0;
}

// #include<iostream>
// using namespace std;
// bool findkey(int arr,int rows,int cols,int key)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j]==key)
//             {
//             return true;
//             break;
//             }
            
//         }
        
//     }
//     return false
// }
// int main(){
//     int arr[3][3];
//     int rows=3;
//     int cols=3;
//     for (int i = 0; i <3; i++)
//     {
//         for (int j = 0; j <3; j++)
//         {
//             cin>>arr[i][j];
//         }
        
//     }
//     for (int i = 0; i <rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//         cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     int key=6;
//     findkey(arr,3,3,6);
// }