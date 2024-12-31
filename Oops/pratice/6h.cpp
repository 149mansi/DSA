#include<iostream>
using namespace std;

class Animal {
private:
    int weight; // Private property

public:
    int age;    // Public properties
    string name;

    // Default constructor
    Animal() {
        weight = 0;
        age = 0;
        name = "";
    }

    // Copy constructor
    Animal(Animal &obj) {
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout << "I am inside the copy constructor" << endl;
    }

    // Behaviors
    void eat() {
        cout << "Eating" << endl;
    }

    void sleep() {
        cout << "Sleeping" << endl;
    }

    // Getter and setter for weight
    int getWeight() {
        return weight;
    }

    void setWeight(int w) {
        weight = w;
    }
};

int main() {
    // Create an object 'a' using the default constructor
    Animal a;
    a.age = 5;
    a.name = "Dog";
    a.setWeight(10);

    // Create a copy of object 'a' using the copy constructor
    Animal c = a; // Copy constructor is called
    Animal animal1(c); //also called by this

    // Accessing properties of the copied object
    cout << "Copied Animal details: " << endl;
    cout << "Name: " << c.name << ", Age: " << c.age << ", Weight: " << c.getWeight() << endl;

    return 0;
}
