// defalult constrctor
#include<iostream>
using namespace std;

class Animal{
//    state or properties= state means data
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
    
Animal a();
Animal*b=new Animal();
    
    

}