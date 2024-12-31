// preorder traverasl
#include<iostream>
#include<queue>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }


};

int findPostion(int arr[],int n, int element){
    for (int i = 0; i < n; i++)
    {
       if (arr[i]==element)
       {
        return i;
       }
       
    }
    return -1;
}
// build tree from inorder and preorder traversal
Node* buildTreeFromPreOrderInOrder(int inorder[],int preorder[],int size, int &preIndex,int inorderStart, int inorderEnd){
    // base case
    if (preIndex>=size || inorderStart>inorderEnd)
    {
        return NULL;
    }
    // Step A:
    int element = preorder[preIndex++];
    Node*root = new Node(element);
    int pos=findPostion(inorder,size, element); //find postion by hash map

    // Step B root->left solve
    root->left=buildTreeFromPreOrderInOrder(inorder,preorder,size,preIndex,inorderStart,pos-1);
    // step C root->right solve
    root->right=buildTreeFromPreOrderInOrder(inorder,preorder,size,preIndex,pos+1,inorderEnd);
    return root;


}
void levelOrderTraversal(Node* root ) {
	queue<Node*> q;
	//initially
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		//A
		Node* temp = q.front();
		//B
		q.pop();
		
		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}	
		}
		else {
			//C
			cout << temp->data << " ";
			//D
			if(temp -> left) {
				q.push(temp ->left);
			}
			if(temp ->right) {
				q.push(temp->right);
			}
		}
		
		
	}
}

int main(){
    int inorder[] = {40,20,50,10,60,30,70};
   int  preorder[]={10,20,40,50,30,60,70};
// int inorder[] = {40};
//    int  preorder[]={40};
    int size=7;
    int  preIndex=0;
    int inorderStart = 0;
    int inorderEnd=size-1;
    cout<<"Building Tree:"<<endl;
    Node*root = buildTreeFromPreOrderInOrder(inorder,preorder,size,preIndex,inorderStart,inorderEnd);

    cout<<"printing level order traversal"<<endl;
    levelOrderTraversal(root);

    return 0;
}