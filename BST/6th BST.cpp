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

Node* findNodeInBst(Node* root, int target) {
    if (root == NULL) {
        return NULL;
    }
    if (root->data == target) {
        return root;
    }
    if (target > root->data) {
        // right subtree me search karo
        return findNodeInBst(root->right, target);
    } else {
        // left subtree me search karo
        return findNodeInBst(root->left, target);
    }
}
int maxValue(Node* root) {
    Node* temp = root;
    if (temp == NULL) {
        return -1; // Handle empty tree case
    }
    while (temp->right != NULL) {
        temp = temp->right;
    }
    return temp->data;
}

Node*deleteNodeINBST(Node*root,int target){
    // base case
    if(root==NULL){
        return root;

        // step1 
        Node* temp= findNodeInBst(root,target);
        // I want to delte temp
        if (temp->left==NULL && temp->right==NULL)
        {
            // leaf node
            delete temp;
            return NULL;
        }
        else if (temp->left==NULL && temp->right!=NULL) 
        {
            // store right side
           Node*child=temp->right;
           delete temp;
           return child;
        }
        else if (temp->left!=NULL && temp->right==NULL)
        {
            Node*child=temp->left;
            delete temp;
            return child;
        }
        // else
        // {
        //     // both child are present
        //     // find the inorder successor
        //     Node*inorderSuccessor=temp->right;
        //     while (inorderSuccessor->left!=NULL)
        //     {
        //         inorderSuccessor=inorderSuccessor->left;
        //     }
        //     // copy the data of inorder successor to temp
        //     temp->data=inorderSuccessor->data;
        //     // delete the inorder successor
        //     temp->right=deleteNodeINBST(temp->right,inorderSuccessor->data);
        //     return temp;
        // }
        else
        {
            // both child are prsent
            //  inorder predecessor of left subtree ->left subtree me max value
            int inorderPredecessor=maxValue(temp->left);
            temp->data=inorderPredecessor;
           temp-> left= deleteNodeINBST(temp->left,inorderPredecessor);
            return root;

        }
        
        
    }
}
int main() {
    Node* root = NULL;
    takeInput(root);
    levelOrderTraversal(root);
    // bool ans = findNodeInBst(root, 150);
    // cout << "present or not: " << ans << endl;
    deleteNodeINBST(root,150);
    levelOrderTraversal(root);
    return 0;
}

