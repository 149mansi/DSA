// INHERTIANCE
// #include<iostream>
// using namespace std;
// // parent class/ base class
// class Animal{
//     public: // base class ka acess modifier
//     int age;
//     int weight;
//     void eat(){
//         cout<<"Eating "<<endl;
//     }
// };
// // child class
// class Dog:public Animal{ //mode of inheriance

// };
// int main(){
//     Dog d1;
//     d1.eat();
//     cout<<d1.age;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// // parent class/ base class
// class Animal{
//     public: // base class ka acess modifier
//     int age;
//     int weight;
//     void eat(){
//         cout<<"Eating "<<endl;
//     }
// };
// // child class
// class Dog:protected Animal{ //mode of inheriance
//  public:
//  void print(){
//     cout<<this->age;
//  }
// };
// int main(){
//     Dog d1;
//     d1.print();
    
//     return 0;
// }



// #include<iostream>
// using namespace std;
// // parent class/ base class
// class Animal{
//     public: // base class ka acess modifier
//     int age;
//     int weight;
//     void eat(){
//         cout<<"Eating "<<endl;
//     }
// };
// // child class
// class Dog:private Animal{ //mode of inheriance
//  public:
//  void print(){
//     cout<<this->age;
// };
// int main(){
//     Dog d1;
//     d1.print();
//     return 0;
// }




#include <iostream>
using namespace std;

// Parent class
class Animal {
protected: // Protected members of base class
    int age;
   

    
};

// Child class with public inheritance
class Dog : public Animal { // Change to public inheritance
public:
void print(){
    cout<<this->age;
}
    
};

int main() {
    Dog d1;
    // inside class used 
    d1.print();

    // outside class
    // cout<<d1.age;
    return 0;
    
}
