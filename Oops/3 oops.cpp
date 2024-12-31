// Encapsulation
#include<iostream>
using namespace std;

    class Animal{
        // when we are privarte the data is encapusulation
        private:
        int age;
        int weight;

public:
        void eat(){
            cout<<"Eating "<<endl;
        }

        int getAge(){
            return this->age;
        }
        void setAge(int age){
            this->age = age;
        }

    };
    int  main(){
        
    }
