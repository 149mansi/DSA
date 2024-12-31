#include<iostream>
using namespace std;
int main(){
    int a=6;
    int*ptr = &a;
    // copy pointer
    int*dusraptr = ptr;
    cout<<*ptr<<endl;
    cout<<*dusraptr<<endl;
}