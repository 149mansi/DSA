#include<iostream>
using namespace std;
int main(){
    int a=5;
    // pointer create
    int*ptr=&a;
    // access the value of ptr  is pointing to
    cout<<"Address of a is:"<<&a<<endl;
    cout<<"Value stored at ptr is:"<<ptr<<endl;
    cout<<"value ptr is pointing to is:"<<*ptr<<endl;
cout<<&ptr<<endl;

    
}