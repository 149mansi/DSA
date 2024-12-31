// sort comparator
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(char first, char second) {
    
    return first > second;
}

bool compare(int a, int b) {
    cout << "First character is: " << a << endl;
    cout << "Second character is: " << b << endl << endl;
    return a > b;
}

int main() {
    string s = "babbar";
    sort(s.begin(), s.end(), cmp);

    vector<int> v{5, 3, 1, 2, 4};
    sort(v.begin(), v.end(), compare);

    for (auto i : v) {
        cout << i << "  ";
    }

    cout << endl << s << endl;
    return 0;
}
