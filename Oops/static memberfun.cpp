#include<iostream>
using namespace std;

class abc {
public:
    // Non-static data members
    int x, y;

    abc():x(0),y(0){}
    
    // Static member function
    static void print() {
        // Since this is a static function, it cannot access non-static members directly
        cout << "I am in static " << __FUNCTION__ << endl;
    }
};

int main() {
    abc obj1;
    obj1.print();
    abc::print();
    abc obj2;
    abc::print();  // Calling static function
    abc::print();  // Calling static function again
    
    return 0;
}
