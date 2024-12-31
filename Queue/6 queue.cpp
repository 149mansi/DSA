// reverse a queue by using  stack
#include <iostream>
#include <queue>
#include <stack>
using namespace std; 

void reversrQueue(queue<int> &q) { // Pass by reference
    stack<int> s;

    // Step 1: Push all elements of q into s
    while (!q.empty()) {
        int element = q.front();
        q.pop();
        s.push(element);
    }

    // Step 2: Push all elements back from s to q
    while (!s.empty()) {
        int element = s.top();
        s.pop();
        q.push(element);
    }
}

int main() {
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);
    reversrQueue(q);

    cout << "Printing Queue" << endl;
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
