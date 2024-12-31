#include<iostream>
using namespace std;
class car{
    public:
    int age;
    int weight;
    string name;

    void speedUp(){
        cout<<"Spending Up"<<endl;
    }

};
class Scropio:public car{

};
class Fortuner:public car{

};


int main(){
Scropio s11;
s11.speedUp();

Fortuner f11;
f11.speedUp();
return 0;
}