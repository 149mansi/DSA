#include<iostream>
#include<queue>
#include<limits.h>
using namespace std;

class Node
{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* findPredcessor(Node*root,Node*P){
    Node*pred=0;
    Node*curr=root;
    while(curr){
        if (curr->data < P->data)
        {
            pred=curr;
            curr=curr->right;
        }
        else
        {
            curr=curr->left;
        }
        
    }
    return pred;
}

int main(){
    Node*root=new Node(10);
    root->left=new Node(5);
    root->right=new Node(6);
    root->left->left=new Node(3);
    root->left->right=new Node(7);
    root->right->left=new Node(12);
    root->right->right=new Node(18);
    Node*pred=findPredcessor(root, root->right);
    cout<<pred->data;
    return 0;
}