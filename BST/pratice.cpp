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
        this->left=NULL;
        this->right=NULL;
    }
};
Node* insertIntoBST(Node*root,int data){
    if (root==NULL){
        root=new Node(data);
        return root;

    }
    if (root->data>data)
    {
       root->left=insertIntoBST(root->left,data);
    }
    else{
        root->right=insertIntoBST(root->right,data);
    }
    return root;
}
void takeInput(Node*&root){
    int data;
    cout<<"Enter the data (enter -1 to stop): ";
    cin>>data;
    while (data!=-1)
    {
        root=insertIntoBST(root,data);
        cin>>data;
    }
    
}
void leveleOrderTrveversal(Node*root){
    if (root==NULL)
    {
        cout<<"Tree is empty"<<endl;
        return;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node*temp=q.front();
        q.pop();
        if (temp==NULL)
        {
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        
        }
        else
        {
            cout<<temp->data<<" ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
               q.push(temp->right);
            }
            
        }
        
    }
    
}
Node*findNodeInBST(Node*root,int target){
    if (root==NULL)
    {
       return NULL;
    }
    if (root->data==target)
    {
       return root;
    }
    if (target>root->data)
    {
        return findNodeInBST(root->right,target);
    }
    else
    {
        return findNodeInBST(root->left,target);
    }
    
}

int maxvalue(Node*root){
    Node*temp=root;
    if (temp==NULL)
    {
        return-1;
    }
    while (temp->right!=NULL)
    {
       temp=temp->right;
    }
    return temp->data;
}

Node*deleteNodeInBST(Node*root,int target){
    // base case
    if (root==NULL)
    {
       return NULL;
    }
    if (root->data==target)
    {
        if (root->left==NULL && root->right==NULL)
        {
            return NULL;
        }
        else if (root->left==NULL && root->right!=NULL)
        {
            Node*child=root->right;
            return child;
        }
        else if (root->left!=NULL && root->right==NULL)
        {
            Node*child=root->left;
            return child;
        }
       else{
        int inorderpre=maxvalue(root->left);
        root->data=inorderpre;
        root->left=deleteNodeInBST(root->left,inorderpre);
        return root;
       } 
    }
    else if (target>root->data)
    {
       root->right=deleteNodeInBST(root->right,target);
    }
    
    else if(target<root->data){
        root->left=deleteNodeInBST(root->left,target);
    }
    return root;
}

int main(){
    Node*root=NULL;
   takeInput(root);
   cout<<"Level order traversal of the tree is: "<<endl;
   leveleOrderTrveversal(root);
   deleteNodeInBST(root,150);
   leveleOrderTrveversal(root);
    return 0;
}