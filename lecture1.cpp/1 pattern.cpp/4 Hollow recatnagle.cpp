//  *  *  *  *  * 
//  *           *
//  *  *  *  *  *
#include<iostream>
using namespace std;
int main(){
    // outer loop
    for (int row = 0; row < 3; row=row+1)
    { 
        // first row and last row
        if (row==0||row==2)
        {
            for (int col  = 0; col < 5; col++)
            {
                cout<<" * ";
            }
            
        }
        else
        {
            // remainging middle row
            // first star
        cout<<" * ";
        for (int col = 0; col< 3; col=col+1)
        {
            // spaces
        cout<<"   ";
        }
        // last star
        
        cout<<" * ";
        }
        cout<<endl;
    }
    
}
    
    