#include<iostream>
#include<queue>
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
        root = new Node(data);
        return root;
    }
    if (root->data > data) {
        root->left = insertIntoBST(root->left, data);
    } else {
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void takeInput(Node*& root) {
    int data;
    cout<<"Enter the data (enter -1 to stop): ";
    cin >> data;
    while (data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void levelOrderTraversal(Node* root) {
    if (root == NULL) {
        cout << "Tree is empty" << endl;
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

bool findNodeInBst(Node* root, int target) {
    if (root == NULL) {
        return false;
    }
    if (root->data == target) {
        return true;
    }
    if (target > root->data) {
        // right subtree me search karo
        return findNodeInBst(root->right, target);
    } else {
        // left subtree me search karo
        return findNodeInBst(root->left, target);
    }
}

int main() {
    Node* root = NULL;
    takeInput(root);
    levelOrderTraversal(root);
    bool ans = findNodeInBst(root, 150);
    cout << "present or not: " << ans << endl;
    return 0;
}

