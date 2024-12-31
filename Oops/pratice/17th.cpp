// downcasting
#include<iostream>
using namespace std;
class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }


};
class Dog:public Animal{
    public:
    // override
    void speak(){
        cout<<"barking"<<endl;
    }
};
int main(){
    // downcasting
Dog*b=(Dog*)new Animal();
b->speak();   //output is speaking but we wwant a barking so in parent class we will be used virtual keyword

}