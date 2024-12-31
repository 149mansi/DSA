#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value of n:"<<endl;
cin>>n;

for (int row  = 1; row<=2*n-1; row=row+1)
{
    int stars =row;
    if (row>n)stars=2*n-row;
    for (int col  = 1; col<=stars ; col=col+1)
    {
        cout<<"*";
    }
    cout<<endl;
    
}
}