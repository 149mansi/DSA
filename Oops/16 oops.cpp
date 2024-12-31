// function overding
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
    
    cout<<"Barking"<<endl;
}

};
int main(){
    // obj1 
//     Animal a;
// a.speak();

// obj2
// Dog a;
// a.speak();

// Dynmaical object creatoin

// Animal*a= new Animal();
// a->speak();

// Dog*a=new Dog();
// a->speak();


// upcasting
Animal*a= new Dog();
a->speak();

return 0;
}