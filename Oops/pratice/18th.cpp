// constructor
#include<iostream>
using namespace std;
class Animal{
    public:
    Animal(){
        cout<<"I am inside animal constrcutor"<<endl;
    }
    void speak(){
        cout<<"speaking"<<endl;
    }


};
class Dog:public Animal{
    public:
    // override

    Dog(){
        cout<<"I am inside Dog constuctor"<<endl;
    }
    void speak(){
        cout<<"barking"<<endl;
    }
};
int main(){
    // constrctor called
    // Animal*a= new Animal();

    // Animal*a=new Dog();
 
    // Dog*a=(Dog*) new Animal();
    // return 0;

    Animal*a=new Animal();

}