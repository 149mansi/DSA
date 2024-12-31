// upcasting and downcasting
#include<iostream>
using namespace std;
class Animal{
 public:
virtual void speak(){
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


// upcasting
Animal*a= new Dog();
a->speak();


// DownCasting 
Dog*b =(Dog*)new Animal();
b->speak();
return 0;
}