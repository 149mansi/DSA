// postoreder,inorder preorder traversal of a BST
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

Node* insertIntoBst(Node* root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return root;
    }
    if (root->data > data) {
        root->left = insertIntoBst(root->left, data);
    } else {
        root->right = insertIntoBst(root->right, data);
    }
    return root;
}

void takeInput(Node*& root) {
    int data;
    cout << "Enter data (enter -1 to stop): ";
    cin >> data;
    while (data != -1) {
        root = insertIntoBst(root, data);
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

void preorder(Node* root) {
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    // LNR
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// postorder traversal
void postorder(Node* root) {
    // LRN
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = NULL;
    cout << "Enter the data for the tree:" << endl;
    takeInput(root);
    cout << "Level Order Traversal:" << endl;
    levelOrderTraversal(root);
    cout << "Preorder Traversal:" << endl;
    preorder(root);
    cout << endl;
    cout << "Inorder Traversal:" << endl;
    inorder(root);
    cout << endl;
    cout << "Postorder Traversal:" << endl;
    postorder(root);
    
    return 0;
}
