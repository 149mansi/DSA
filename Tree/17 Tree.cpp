#include <iostream>
#include <queue>
#include <map>
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

Node *buildTree()
{
    int data;
    cout << "Enter the data: " << endl;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    // Step A: Create the root node
    Node *root = new Node(data);

    // Step B: Build the left subtree
    cout << "Enter data for the left part of " << data << " node" << endl;
    root->left = buildTree();

    // Step C: Build the right subtree
    cout << "Enter data for the right part of " << data << " node" << endl;
    root->right = buildTree();

    return root;
}

void printLeftBoundary(Node* root) {
	//base case
	//if root is NULL, then go back
	if(root == NULL)
		return;
	//if root is a leaf node , then go back 
	if(root->left == NULL && root->right == NULL)
		return;

	cout << root->data << " ";
	
	if(root->left) {
		printLeftBoundary(root->left);
	}
	else {
		printLeftBoundary(root->right);
	}
}

void printLeafBoundary(Node* root) {
	//base case
	if(root == NULL)
		return;
	if(root->left == NULL && root->right == NULL) {
		cout << root->data << " ";
	}
	printLeafBoundary(root->left);
	printLeafBoundary(root->right);
}

void printRightBoundary(Node* root) {
	//base case
	if(root == NULL)
		return;
	if(root->left == NULL && root->right == NULL)
		return ;

	if(root->right) {
		printRightBoundary(root->right);
	}
	else {
		printRightBoundary(root->left);
	}
	
	cout << root->data << " ";
}

void boundaryTraversal(Node* root) {
	if(root == NULL)
		return;

	cout << root->data << " ";
	//A
	printLeftBoundary(root->left);
	//B
	printLeafBoundary(root);
	//C
	printRightBoundary(root->right);
}

int main()
{
    Node *root = buildTree();
    boundaryTraversal(root);

    return 0;
}
// 10 20 30 -1 -1 50 70 90 -1 -1 80 -1 -1 60 -1 -1 40 -1 100 -1 120 110 -1 -1 130 -1 -1
