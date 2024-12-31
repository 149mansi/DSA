#include<iostream>
using namespace std;
// Create function
// function decalartion
int add(int a, int b){
    int result =a+b;
    return result;
    // return is keyword is use for stop the excution 
    // after return we can not write any code because its does not excute
}
int main(){
    int a;
    cout<<"Enter the value of first number: "<<endl;
    cin>>a;
    int b;
    cout<<"Enter the value of second number: "<<endl;
    cin>>b;
    // function call
    int sum= add(a,b);
    cout<<"value of sum is: "<<sum<<endl;
}