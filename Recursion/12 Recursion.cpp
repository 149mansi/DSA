// input= 647 output= print all digit of this number
// normal in for loop we do 647%10 = 7 647%10=4 647%10= 6  
#include<iostream>
using namespace std;
void printDigits(int n){
    // base case
    if (n==0)
    {
        return;
    }
    int newvalueOfN= n/10;

    // baaki recursion sambhal lenga
    printDigits(newvalueOfN); 
    //  ek case solve karunga
    int digit= n%10;
    cout<<digit<<" ";
}
int main(){
int n=647;
printDigits(n);
}