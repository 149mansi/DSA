// print top view of code
#include <iostream>
#include <queue>
#include <map>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree() {
    int data;
    cout << "Enter the data: " << endl;
    cin >> data;
    if (data == -1) {
        return NULL;
    }
    // Step A: Create the root node
    Node* root = new Node(data);

    // Step B: Build the left subtree
    cout << "Enter data for the left part of " << data << " node" << endl;
    root->left = buildTree();

    // Step C: Build the right subtree
    cout << "Enter data for the right part of " << data << " node" << endl;
    root->right = buildTree();

    return root;
}

void printTOPVIEW(Node* root) {
    if (root == NULL) {
        return;
    }

    // Create a map for storing HD -> TopNode->data
    map<int, int> topNode;

    // Level order traversal using a queue
    queue<pair<Node*, int>> q;
    q.push(make_pair(root, 0));

    while (!q.empty()) {
        pair<Node*, int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second;

        // Check if the answer for this horizontal distance (hd) already exists
        if (topNode.find(hd) == topNode.end()) {
            // Create entry for this hd
            topNode[hd] = frontNode->data;
        }

        // Add left and right children with updated horizontal distances
        if (frontNode->left) {
            q.push(make_pair(frontNode->left, hd - 1));
        }
        if (frontNode->right) {
            q.push(make_pair(frontNode->right, hd + 1));
        }
    }

    // Print the top view stored in the map
    cout << "Top View of the Tree:" << endl;
    for (auto i : topNode) {
        cout << i.first << " -> " << i.second << endl;
    }
}

int main() {
    Node* root = buildTree();
    printTOPVIEW(root);
    return 0;
}
// input:
// 1 2 3 -1 -1 4 6 -1 -1 -1 9 5 -1 7 -1 -1 9 8 -1 -1 