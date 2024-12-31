#include<iostream>
using namespace std;
bool checkEven(int n){
    // if (n%2==0)
    // 2nd method
    if((n&1)==0)
    {
       return true; 
    }
    else
{
    return false;
}
}

int main(){
    int n;
    cin>>n;
    bool isEven = checkEven(n);
    if (isEven)
    {
    cout<<n<<"IS Even number"<<endl;
    }
    else
    {
        cout<<n<<"is odd number"<<endl;
    }
    
    
}