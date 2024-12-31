#include<iostream>
using namespace std;
// n is parameter because we are decalre function
void printCounting(int n){
    for (int  i = 1; i <=n; i++)
    {
        cout<<i<<" "<<endl;
    }
    

}
// Function call
int main(){
    int n;
    cout<<"Enter the value of N:"<<endl;
    cin>>n;
    // n is argument
printCounting(n);
return 0;
}