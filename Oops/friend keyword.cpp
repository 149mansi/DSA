#include<iostream>
using namespace std;

class A {
    private:
        int x;

    public:
        // Constructor to initialize x
        A(int _val) : x(_val) {}

        // Getter function for x
        int getX() const { return x; }

        // Setter function for x (corrected syntax)
        void setX(int _val) { x = _val; }

        // Declaring B as a friend class to allow access to private members
        friend class B;
        friend void print(const A&);
};

class B {
    public:
        // Print function that accesses private member x of class A
        void print(const A& a) {
            cout << a.x << endl;
        }
};
void print(const A &a){
    cout<<a.x<<endl;
}

int main() {
    A a(5);
    B b;
    b.print(a);

    return 0;
}
