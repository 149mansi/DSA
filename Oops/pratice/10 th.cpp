// single levele inheriatne
#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int weight;
    int age;
    void sppedUp(){
        cout<<"Speeding Up"<<endl;
    }
    void breakMarro(){
        cout<<"break maardi"<<endl;
    }

};
class Scorpio:public Car{ // read it like that: Scorpio is a Car

};
int main(){
    Scorpio babbarwali;
    babbarwali.sppedUp();
    return 0;

}