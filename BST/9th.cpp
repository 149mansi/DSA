// sorted linked list into bst
#include<iostream>
#include<queue>
using namespace std;
class Node  {   
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

void convertIntoSortedDLL(Node*root,Node*&head)
{
    // base case
    if (root==NULL)
    {
      return;
    }
    // right subtree into LL
    convertIntoSortedDLL(root->right,head); 
    // attach right node
    root->right=head;
    if (head!=NULL)
    {
        head->left=root;
    }
    // update head
    head=root;
    // left subtree linked list
    convertIntoSortedDLL(root->left,head);
}
void printLinkedList(Node*head){
    Node*temp=head;
    cout<<endl;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->right;
    }
    cout<<endl;
}
Node*bstusingInorder(int inorder[],int s, int e){
    // base case
    if (s>e)
    {
     return NULL;
    }
    int mid=(s+e)/2;
    int element = inorder[mid];
    Node*root= new Node(element);
    root->left=bstusingInorder(inorder,s,mid-1);
    root->right=bstusingInorder(inorder,mid+1,e);
    return root;
}
Node*sortedLinkedListIntoBST(Node*&head,int n){
    // base case
    if (n<=0 || head==NULL)
    {
        return NULL;
    }
    Node*leftSubtree=sortedLinkedListIntoBST(head,n-1-n/2);
    Node*root=head;
    root->left=leftSubtree;

    head=head->right;
    // right part solve karna h
    root->right=sortedLinkedListIntoBST(head,n/2);
}
int main(){
    int inorder[]={1,2,3,4,5,6,7,8,9};
    int s=0;
    int e=8;
    Node*root=bstusingInorder(inorder,s,e);
    levelOrderTraversal(root);

    cout<<"printing sorted linked list:"<<endl;
    Node*head=NULL;


    convertIntoSortedDLL(root,head);
    printLinkedList(head);

Node*root1=NULL;
    root1=sortedLinkedListIntoBST(head,9);
    cout<<"Doping level order traversal for root 1"<<endl;
    levelOrderTraversal(root1);

    
    return 0;
}
