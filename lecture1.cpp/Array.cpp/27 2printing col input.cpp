#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int rows=3;
    int cols=3;

for (int i = 0; i <rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        // we take input column wise 
        cin>>arr[j][i];
    }
    
}
cout<<"printing row wise"<<endl;
for (int i = 0; i <rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

}