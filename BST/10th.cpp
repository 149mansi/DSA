#include <iostream>
#include <queue>
#include <limits.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class NodeData {
public:
    int size;
    int minVal;
    int maxVal;
    bool validBST;

    NodeData() {}

    NodeData(int size, int max, int min, bool valid) {
        this->size = size;
        minVal = min;
        maxVal = max;
        validBST = valid;
    }
};

NodeData* findLargestBST(Node* root, int &ans) {
    // base case
    if (root == NULL) {
        NodeData* temp = new NodeData(0, INT_MIN, INT_MAX, true);
        return temp;
    }

    NodeData* leftKaAns = findLargestBST(root->left, ans);
    NodeData* rightKaAns = findLargestBST(root->right, ans);

    // checking starts here
    NodeData* currNodeKaAns = new NodeData();

    currNodeKaAns->size = leftKaAns->size + rightKaAns->size + 1;
    currNodeKaAns->maxVal = max(root->data, rightKaAns->maxVal);
    currNodeKaAns->minVal = min(root->data, leftKaAns->minVal);

    if (leftKaAns->validBST && rightKaAns->validBST && (root->data > leftKaAns->maxVal && root->data < rightKaAns->minVal)) {
        currNodeKaAns->validBST = true;
    }
    else {
        currNodeKaAns->validBST = false;
    }

    if (currNodeKaAns->validBST) {
        ans = max(ans, currNodeKaAns->size);
    }

    return currNodeKaAns;
}

Node* insertIntoBST(Node* root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return root;
    }
    if (root->data > data) {
        root->left = insertIntoBST(root->left, data);
    }
    else {
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
        }
        else {
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

int main() {
    // Node* root = NULL;
    // takeInput(root);
    Node* root = new Node(50);
		Node* first = new Node(30);
		Node* second = new Node(60);
		Node* third = new Node(5);
		Node* fourth = new Node(20);
		Node* fifth = new Node(45);
		Node* sixth = new Node(70);
		Node* seventh = new Node(65);
		Node* eight = new Node(80);

    root->left = first;
		root->right = second;
		first->left = third;
		first -> right = fourth;
		second->left = fifth;
		second->right = sixth;
		sixth->left = seventh;
		sixth->right= eight;

    levelOrderTraversal(root);

    int ans = 0;
    findLargestBST(root, ans);

    cout << "Largest BST size is: " << ans << endl;
    return 0;
}
