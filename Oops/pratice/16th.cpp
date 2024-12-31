// runctime override
// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     void speak(){
//         cout<<"speaking"<<endl;
//     }


// };
// class Dog:public Animal{
//     public:
//     // override
//     void speak(){
//         cout<<"barking"<<endl;
//     }
// };
// int main(){
//     // Dog a;
//     // a.speak();
//     // Animal a;
//     // a.speak();


//     // derived class

//     // Animal*a=new Animal();
//     // a->speak();

// // Dog*a=new Dog();
// // a->speak();

// // upcasting
// Animal*a=new Dog();
// a->speak();   //output is speaking but we wwant a barking so in parent class we will be used virtual keyword

// }

// upcasting
#include<iostream>
using namespace std;
class Animal{
    public:
     virtual void  speak(){
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
    

// upcasting
Animal*a=new Dog();
a->speak();   //output is speaking but we wwant a barking so in parent class we will be used virtual keyword

}