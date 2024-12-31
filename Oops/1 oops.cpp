// static memory allocation in opps
#include<iostream>
using namespace std;
class Animal{
    // state properties
    private:
    int weight;
    public:
    int age;
    string name;

    // defalut constuctor
    
    Animal(){
        // constutor intialize
        this->weight=0;
        this->age = 0;
        this->name ="";
        cout<<"Constructor called"<<endl;
    }
    // parameterrize construtor
    Animal(int age){
        this->age= age;
        cout<<"Parameter constrcutor called"<<endl;
    }
 // 2-parameterrize construtor
Animal(int age, int weight){
        this->age= age;
        this->weight = weight;
        cout<<"Parameter constrcutor 2 called"<<endl;
    }
 // 3-parameterrize construtor
Animal(int age, int weight, string name){
        this->age= age;
        this->weight = weight;
        this->name=name;
        cout<<"Parameter constrcutor 3 called"<<endl;
    }

    // copy construtor
    Animal(Animal & obj){
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout<<"I am inside copy constrcutor"<<endl;
    }
    // behaviour meaning functions
    void eat(){
cout<<"Eating"<<endl;

    }
    void sleep(){
cout<<"Sleeping"<<endl;
    }
    int getWeight(){
        return weight;
    }
    void setWeight(int weight){
       this-> weight =weight;
    }

void print(){
    cout<<this->age<<" "<<this->weight<<" "<<this->name<<endl;
}



};
int main(){
//    Object Cration
// Static 
Animal ramesh;
ramesh.age=12;
ramesh.name="Lion";
cout<<"Age of Ramesh is: "<<ramesh.age<<endl;
cout<<"name of Ramesh is: "<<ramesh.name<<endl;


ramesh.eat();
ramesh.sleep();
ramesh. setWeight(101);
cout<<"Weight"<<ramesh.getWeight()<<endl;


// dynamic meormy
 Animal*suresh = new Animal;
 (*suresh).age = 15;
 (*suresh).name = "bilLi";

//  alternat dynamic
suresh->age=17;
suresh->name="baby";

// function acess
suresh->eat();
suresh->sleep();

/*  one parameterrize construtor 
Animal a(10);
Animal*b = new Animal(100);
*/
/* two parameterrize construtor
Animal a(10);
Animal*b = new Animal(100,10,"mansi");
*/
// three parameterrize construtor
// Animal a(10);
// Animal*b= new Animal(100,10,"mansi");


/* object copy
// 1 copy constustor passs
Animal c =a;

// pass by refrence
Animal d(*b);
// 2 copy constustor passs
Animal animal1(c);
*/

// Animal a;
// a.age =20;
// a.setWeight(101);
// a.name = "mansi";

// Animal b=a;

// cout<<"a->";

// a.print();
// cout<<"a->";
// b.print();

// a.name[0]='c';
// cout<<"a->";
// a.print();


// cout<<"b->";
// b.print();
 return 0;
}

