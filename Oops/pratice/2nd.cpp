// how to acess the private memeber outside the class 
// eg. weight is private but we are aceess this outside the class
// by using getters and setters function
#include<iostream>
using namespace std;

class Animal{
//    state or properties= state means data
private:
int weight;
public:
int age;
string name;

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
    // object creation
    // static
    Animal ramesh;
    ramesh.age=12;
    ramesh.name="lion";
    cout<<"Age of ramesh is"<<ramesh.age<<endl;
    cout<<"ans of ramesh is"<<ramesh.name<<endl;
    
    // function call
    ramesh.eat();
    ramesh.sleep();
    ramesh.setWeight(101);
    cout<<"weight"<<ramesh.getWeight()<<endl;

    

}