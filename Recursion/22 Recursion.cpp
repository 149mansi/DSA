#include<iostream>
#include<string>  // Correct header for using string class
using namespace std;

void lastOccLTR(string &s, char x, int i, int &ans) {
    // base case
    if (i >= s.size()) {
        return;
    }
    // ek case solution
    if (s[i] == x) {
        ans = i;
    }
    // RE
    lastOccLTR(s, x, i + 1, ans);
}

int main() {
    string s;
    cout<<"Enter the value of string"<<endl;
    cin >> s;
    
    char x;
    cout<<"Enter the value of search: "<<endl;
    cin >> x;
    int ans = -1;
    lastOccLTR(s, x, 0, ans);
    cout <<"Print the index: "<< ans << endl;
}
