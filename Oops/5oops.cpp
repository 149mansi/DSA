// Public or public
#include<iostream>
using namespace std;
// public: Acess modifier
    class Animal{
        public:
        int age;
        

    
    
};
// public: mode of inheriatnce
class Dog:public Animal{

};


int main(){
    Dog d1;
    cout<<d1.age;
    return 0;

}