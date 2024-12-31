// polymorphsim
// compile time polymorphism
// operator overloading
#include <iostream>
using namespace std;

class Param {
public:
    int val;

    // Overloading the '+' operator
    void operator+(Param& obj2) {
        int value1 = this->val;
        int value2 = obj2.val;

        // Print the difference
        cout << (value2 - value1) << endl;
    }
};

int main() {
    Param obj1, obj2;
    obj1.val = 7;
    obj2.val = 2;

    // This will print the difference
    obj1 + obj2;

    return 0;
}
