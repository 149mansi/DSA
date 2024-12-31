#include <iostream>
#include <queue>
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

Node* insertIntoBST(Node* root, int data) {
    if (root == NULL) {
        // this is the first node we have to create
        root = new Node(data);
        return root;
    }
    // if node is less than the root node then
    if (root->data > data) {
        // insert to the left
        root->left = insertIntoBST(root->left, data);
    } else {
        // if data is greater than the root node then put into the right
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void takeInput(Node*& root) {
    int data;
    cin >> data;
    while (data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}



void levelOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}



int maxVal(Node* root) {
    Node* temp = root;
    if (temp == NULL) {
        return -1; // Handle empty tree case
    }
    while (temp->right != NULL) {
        temp = temp->right;
    }
    return temp->data;
}

int main() {
    Node* root = NULL;
    cout << "Enter the data to insert in the BST: " << endl;
    takeInput(root);
    cout << "Printing the tree:" << endl;
    levelOrderTraversal(root);
    cout << "The maximum value in the tree is: " << maxVal(root) << endl;
    return 0;
}
