#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int row = 0; row < n; row=row+1)
     {
        // start the code
        for (int col =row+1; col <=n; col=col+1)
        {
            if (col==row+1||col==n||row==0)
            {
                 cout<<col;
            }
            else
            {
                cout<<" ";
            
            }
            
           
        }
       cout<<endl; 
    }
    
}