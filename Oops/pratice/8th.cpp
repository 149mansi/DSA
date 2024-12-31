// encapsulation
#include<iostream>
using namespace std;
class Animal{
    // perfert encapsulation
    private:
    int age;
    int weight;
    public:

    void eat(){
        cout<<"Eating"<<endl;
    }
    void getAge(){
        return this->age;
    }
void setAge(int age){
    this->age=age;
}

};
int main(){
    
}