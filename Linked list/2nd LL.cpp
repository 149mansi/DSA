// how to insert the linked list
#include<iostream>
using namespace std;
class Node{
public:
int data;
Node*next;
Node(){
    this->data= 0;
    this->next = NULL;
}
Node(int data){
    this->data = data;
    this->next=NULL;
}

};
// I want to insert a node right at the head of Linked list 
void insertAtHead(Node* &head, int data){
    // step1:
    Node* newNode = new Node(data);
    // step2:
newNode ->next =head;
// step3:
head= newNode;
}
void print(Node* &head){
    Node*temp= head;
    while (temp != NULL) 
    { 
       cout<<temp->data<<" ";
       temp = temp->next;
    }
    

}
int main(){
Node* head = new Node(10);
insertAtHead(head,20);
insertAtHead(head,50);
insertAtHead(head,60);
insertAtHead(head,90);

// when head is null

// Node* head = NULL;
// insertAtHead(head,20);
// insertAtHead(head,50);
// insertAtHead(head,60);
// insertAtHead(head,90);
print(head);
 return 0;

}