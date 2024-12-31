#include<iostream>
using namespace std;
int main(){
    for (int row  = 0; row < 7; row++)
    {
        for (int col = 0; col < 7; col++)
        {
            if (row==0||col==0||col==7-row-1)
            {
            cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        
        }
        cout<<endl;
    }
    
}

