// left view
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

void printLeftTree(Node* root,vector<int> &ans, int level){
    // base case
    if (root==NULL)
    
        return;
    
    if (level == ans.size())
    {
        ans.push_back(root->data);


    }
    // left
    printLeftTree(root->left,ans, level+1);
    // right
    printLeftTree(root->right,ans,level+1);
    
    // Print the top view stored in the map
   
}

int main() {
    Node* root = buildTree();
    vector<int>ans;
    int level=0;
    printLeftTree(root,ans,0);
    cout<<"printing the left view"<<endl;
    for (auto i :ans)
    {
        cout<<i<<" ";
    }
    
    return 0;
}
