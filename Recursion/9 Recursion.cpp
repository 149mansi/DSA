// how many char we will be find out at on letter that index will be print
#include<iostream>
#include<vector>
using namespace std;

void checkkey(string& str, int i, int n, char key,vector<int>&ans) {
    // base case
    if(i >= n) {
        // key not found
        
        return;
    }
    
    // check current character
    if (str[i] == key) {
        cout << "Found at: " << i << endl;
    // return here if key is found
    }
    
    // recursive case
    checkkey(str, i + 1, n, key);
}

int main() {
    string str = "lovebaber";
    int n = str.length();
    char key = 'b';
    int i = 0;
    vector<int>ans;
    checkkey(str, i, n, key);
    return 0;
}
