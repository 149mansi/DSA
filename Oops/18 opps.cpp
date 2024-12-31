#include<iostream>
using namespace std;
class Animal{
 public:
 Animal(){
    cout<<"I am inside Animal Constructer"<<endl;
}
virtual void speak(){
    cout<<"speaking"<<endl;

}
};
class Dog:public Animal{
public:
// override
Dog(){
    cout<<"I am inside Dog Constructer"<<endl;
}
void speak(){
    
    cout<<"Barking"<<endl;
}

};
int main(){
    // Animal*a= new  Animal;
    // Dog*a= new Dog;
    Animal*a= new Dog;
// Dog*a=(Dog*) new Animal;
    
return 0;
}