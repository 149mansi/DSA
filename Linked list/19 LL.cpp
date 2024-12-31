/*Merge sort linked list*/
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* findMid(Node* head){
    Node*slow=head;
    Node*fast=head->next;

    while (fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node*merge(Node*left, Node*right){
  if (left ==NULL)
  return right;

  if (right==NULL)
  return left;

  Node*ans=new Node(-1);
  Node*temp=ans;
// merge 2 sorted LInked list
  while (left!=NULL && right!=NULL)
  {
   if (left->data<right->data)
   {
    temp->next=left;
    temp=left;
    left=left->next;
   }
   else
   {
    temp->next=right;
    temp=right;
    right=right->next;
   }
   
  }
  while (left!=NULL)
  {
    temp->next=left;
    temp=left;
    left=left->next;

  }
  while (right!=NULL)
  {
   temp->next=right;
   temp=right;
   right=right->next;
  }
  ans= ans->next;
  return ans;
  
    
}
Node* mergeSort(Node *head){
    //base case
    if (head == NULL || head->next==NULL)
    {
        return head;
    }
    // break linked list in two halves after finding mid
     Node* mid = findMid(head);

     Node*left=head;
     Node*right=mid->next;
     mid->next=NULL;

// recursive calls to sort both half
     left=mergeSort(left);
     right=mergeSort(right);

    //  merge both left and right halves
    Node*result = merge(left,right);
    return result;
}
int main(){
Node* head= new Node(2);
Node* second= new Node(4);
Node* third= new Node(5);
Node* fourth= new Node(3);
Node* fifth= new Node(7);
Node* sixth= new Node(6);
head->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=sixth;

cout<<"Input LL: ";
print(head);
cout<<"Printing the sorted list"<<endl;
Node*temp=NULL;
head=mergeSort(head);
print(head);
return 0;



}