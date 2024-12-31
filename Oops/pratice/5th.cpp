#include<iostream>
using namespace std;

class Animal{
// state or properties= state means data
private:
int weight;
public:
int age;
string name;



// defalult costructor
Animal(){
    this->weight=0;
    this->age=0;
    this->name="";
    cout<<"constructor called"<<endl;
}


// parameterised constructor
Animal(int age, int weight){
    this->age=age;
    this->weight=weight;
    cout<<"parmeterised constrcutor"<<endl;
}

Animal(int age, int weight, string name){
this->age=age;
this->name=name;
this->weight=weight;
cout<<"parmeterised constrcutor 3"<<endl;
}


// behaviour means functionality
void eat(){
cout<<"Eating"<<endl;
}

void sleep(){
cout<<"sleeping"<<endl;
}

// we used getter and setter because of private member
int getWeight(){
    return weight;
}

void setWeight(int w){
    weight = w;
}
};
int main(){
    
Animal a(10,100);
Animal*b=new Animal(100,10,"Babbar");
    

}