#include <iostream>
#include <string>
using namespace std;

void checkString(string s) {
    int vowelCount = 0;
    int consonantCount = 0;

    // Convert string to lowercase to handle uppercase letters uniformly
    for (char ch : s) {
        if (isalpha(ch)) { // Check if the character is a letter
            ch = tolower(ch); // Convert to lowercase
            // Check if the character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }

    // Compare counts and print the appropriate output
    if (vowelCount > consonantCount) {
        cout << "Yes" << endl;
    } else if (vowelCount < consonantCount) {
        cout << "No" << endl;
    } else {
        cout << "Same" << endl;
    }
}

int main() {
    string s = "the quick brown fox jumps over the lazy dog"; // You can change the input string here
    checkString(s); // Call the function
    return 0;
}
