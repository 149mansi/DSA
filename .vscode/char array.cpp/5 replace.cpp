#include <iostream>
#include <string>
using namespace std;

string replaceSpaces(const string& input) {  
    string result;
    for (char ch : input) {
        if (ch == ' ') {
            result += "%?";
        } else {
            result += ch;
        }
    }
    return result;
}

int main() {
    string input = "welcome to greeksforgreeks";
    string output = replaceSpaces(input);
    cout << "Output: " << output << endl;  
    return 0;
}
