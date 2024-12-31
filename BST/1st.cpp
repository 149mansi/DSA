#include<iostream>
#include <queue>
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

Node*insertIntoBST(Node*root,int data){
    if (root==NULL)
    {
        // this is the first node we have to create
        root = new Node(data);
        return root;
    }
    // if node is less than the root node then
    if (root->data>data)
    {
        // insert to the left
        root->left=insertIntoBST(root->left,data);
    }
    else
    {
        // if data is greater than the root node then put into the right
        // insert into right
        root->right=insertIntoBST(root->right,data);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while (data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;

    }

        
        
    }
    
    
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    // intially
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        // A
        Node *temp = q.front();
        // B
        q.pop();
        if (temp==NULL)
        {
           cout<<endl;
           if (!q.empty())
           {
           q.push(NULL);
           }
           
        }
        
        else
        {
            // c
        cout << temp->data << " ";
        // D
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

int main(){
Node*root=NULL;
cout<<"Enter the data for Node"<<endl;
takeInput(root);
cout<<"printing the tree"<<endl;
levelOrderTraversal(root);
return 0;
}