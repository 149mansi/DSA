//  *****
//  *****
//  *****
#include<iostream>
using namespace std;
int main(){
    // outter loop - row observation
    for (int row = 0; row < 3; row=row+1)
    {
        // inner loop- column observation
       for (int col = 0; col<5; col=col+1)
       {
        cout<<"*";
       }
        cout<<endl;
    }
    
}
