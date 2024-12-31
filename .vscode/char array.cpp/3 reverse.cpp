#include <iostream>
#include <cstring>
using namespace std;

void reverseCharArray(char name[]) {
    int n = strlen(name); // Get the length of the character array
    int i = 0;
    int j = n - 1;

    for (; i <= j;) {
        swap(name[i], name[j]); // Swap characters
        i++;
        j--;
    }
}

int main() {
    char name[100];
    cin >> name;

    cout << "Initially: " << name << endl;
    reverseCharArray(name); // Reverse the array
    cout << "After reversal process: " << name << endl;

    return 0;
}
