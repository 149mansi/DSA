// 2d array deaclartion in vector
// differnt mehod decalration 
#include<iostream>
#include<vector>
using namespace std;
int  main(){
    int row=5;
    int col=5;
    // 2d array ko print kart hai ise
    // vector<vector<int> > arr
    // vector<vector<int> > arr(row,vector<int>(col,-8));
    // row indicates the size of outer vector & no of rows
    // col indicated the size of inner vector
    vector<vector<int> > arr(row,vector<int>(col,-8));
    

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j< arr[0].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
       cout<<endl; 
    }
    
return 0;

}