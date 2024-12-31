// inheritance
#include<iostream>
using namespace std;
// public: Acess modifier
    class Animal{
        public:
        int age;
        int weight;

    
    void eat(){
        cout<<"Eating"<<endl;
    }

};
// public: mode of inheriatnce
class Dog:public Animal{

};


int main(){
    Dog d1;
    d1.eat();
    return 0;

}