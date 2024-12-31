// size of empty class is 1
/*#include<iostream>
using namespace std;

class Animal{


};
int main(){
    cout<<"size of empty class is: "<<sizeof(Animal)<<endl;
    return 0;

}*/

/*#include<iostream>
using namespace std;

class Animal{
    int age;
    int weight;
    char ch;


};
int main(){
    cout<<"size of class is: "<<sizeof(Animal)<<endl;
    return 0;

}*/

#include<iostream>
using namespace std;

class Animal{
//    state or properties= state means data
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
}