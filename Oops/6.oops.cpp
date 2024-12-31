// Public to protected
#include<iostream>
using namespace std;
// public: Acess modifier
    class Animal{
        public:
        int age;
        

    
    
};
// public: mode of inheriatnce
class Dog:protected Animal{
// error ayega isliya 
public:
void print(){
    cout<<this->age;
}
};


int main(){
    Dog d1;
    // cannot acces becuase private

    // cout<<d1.age;
    d1.print();
    return 0;

}