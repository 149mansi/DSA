#include<iostream>
using namespace std;

class Animal{
    // state properties
    private:
    int weight;
    public:
    int age;
    string name;

    
    
 
    
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
~Animal(){
    cout<<"I am inside destructor"<<endl;
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
cout<<"a obj cretion"<<endl;
Animal a;
a.age = 5;

cout<<"a obj cretion"<<endl;
Animal*b = new Animal();
b->age = 12;
// manually
delete b;
return 0;
}