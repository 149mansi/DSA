#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;

    }

};
Node *buildTree(){
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;
    if (data==-1)
    {
      return NULL;
    }
    // step ABC;
    Node*root=new Node(data);
    cout<<"Enter data for the left part of"<<data<<endl;
    root->left=buildTree();
    cout<<"Enter data for the right part of"<<data<<endl;
    root->right=buildTree();
    return root;
}
void preorderTraversal(Node*root){
    // base case
    if (root==NULL)
    {
       return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
int main(){
    Node*root=NULL;
    root=buildTree();
    preorderTraversal(root);
    return 0;
}