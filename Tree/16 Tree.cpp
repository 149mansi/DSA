// right view
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

void printRightTree(Node* root,vector<int> &ans, int level){
    // base case
    if (root==NULL)
    
        return;
    
    if (level == ans.size())
    {
        ans.push_back(root->data);


    }
    // right
    printRightTree(root->right,ans,level+1);
    
    // left
    printRightTree(root->left,ans, level+1);
    
    
   
}

int main() {
    Node* root = buildTree();
    vector<int>ans;
    int level=0;
    printRightTree(root,ans,0);
    cout<<"printing the right view"<<endl;
    for (auto i :ans)
    {
        cout<<i<<" ";
    }
    
    return 0;
}
