// Single inheritance
#include<iostream>
using namespace std; 

class Car {  // Class names typically start with an uppercase letter
public:
    string name;
    int weight;
    int age;

    void speedUp() {  // Function name is 'speedUp'
        cout << "speeding up" << endl;
    }

    void breakMarro() {
        cout << "brake applied" << endl;  // Changed the message for clarity
    }
};

class Scorpio : public Car {  // Class names typically start with an uppercase letter
    // Inherits all members from the Car class
};

int main() {
    // Object of derived class Scorpio
    Scorpio mansi;
    mansi.speedUp();  // Corrected function call to 'speedUp'
    return 0;
}
