#include<iostream>
using namespace std;
 void update(int*p){
    cout<<"Address stored in ptr is: "<<p<<endl;
    cout<<"Address of ptr is: "<<&p<<endl;
    *p = *p+10;
 }
int main(){
    int a=5;
    cout<<"Adress of a is"<<&a<<endl;

    int*ptr=&a;
    cout<<"Address stored in ptr is: "<<ptr<<endl;
    cout<<"Address of ptr is: "<<&ptr<<endl;
    update(ptr);

    cout<<"value of a"<<a<<endl;
}
