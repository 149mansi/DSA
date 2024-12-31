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
    
    // dynamic acess
    Animal*suresh = new Animal;
    (*suresh).name="billi";
    (*suresh).age=15;
    cout<<"Age of ramesh is"<<(*suresh).age<<endl;
    cout<<"ans of ramesh is"<<(*suresh).name<<endl;

    // alterante method acess
    suresh->age=17;
    suresh->name="baby";

    suresh->eat();
    suresh->sleep()
    


}