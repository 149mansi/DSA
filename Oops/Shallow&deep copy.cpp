#include <iostream>
#include <cstring> // For strcpy

using namespace std;

class Hero {
private:
    int health;
    char* name;
    char level;

public:
    // Default constructor
    Hero() : health(0), level(' '), name(new char[100]) {
        cout << "Simple constructor called" << endl;
    }

    // Parameterized constructor
    Hero(int health) : health(health), level(' '), name(new char[100]) {}

    // Parameterized constructor with level
    Hero(int health, char level) : health(health), level(level), name(new char[100]) {}

    // Copy constructor

    Hero(const Hero& temp) : health(temp.health), level(temp.level) {
        cout << "Copy constructor called" << endl;
        name = new char[strlen(temp.name) + 1];
        strcpy(name, temp.name);
    }

    // Destructor
    ~Hero() {
        delete[] name;
    }

    // Copy assignment operator
    Hero& operator=(const Hero& other) {
        if (this == &other) return *this; // Handle self-assignment

        delete[] name; // Clean up existing resource

        health = other.health;
        level = other.level;
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);

        return *this;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(const char n[]) {
        strcpy(name, n);
    }

    void print() const {
        cout << endl;
        cout << "[ Name :" << this->name << ", ";
        cout << "Health :" << this->health << ", ";
        cout << "Level  :" << this->level << " ]";
        cout << endl << endl;
    }

    int getHealth() const {
        return health;
    }

    char getLevel() const {
        return level;
    }
};

int main() {
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[] = "Mansi";
    hero1.setName(name);

    hero1.print();

    // Use copy constructor
    Hero hero2(hero1);
    hero2.print();

    // Modify hero1 and check if hero2 is unaffected
    // hero1.setName("Himu");
    hero1.setName("Himu");
    hero1.print();
    hero2.print();

    return 0;
}
