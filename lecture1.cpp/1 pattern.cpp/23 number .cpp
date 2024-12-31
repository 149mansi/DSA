#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int row = 0; row< n; row=row+1)
    {
        int col;
        for ( col  = 0; col < row+1; col=col+1)
        {
            cout<<col+1;
        }
        // row doesnot print reverse so
        col =col-1;
        // reverse counting printing
        for (; col>= 1; col=col-1)
        {
        cout<<col;
        }
        cout<<endl;
    }
    
}