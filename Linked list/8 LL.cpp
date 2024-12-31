// reverse linked list
#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // This is the default constructor
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    // Parameterized Constructor:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// TOOO: write a destructor to delete a node
// ~Node(){
    // write your code here
// cout<<"Node with value: "<<this->data<<"deleted"<<endl;
// }

// I want to Insert a node right at the head of the linked list
void insertAtHead(Node *&head, Node *&tail, int data)
{
    // check for empty LL
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // step1:
    Node *newNode = new Node(data);
    // step2:
    newNode->next = head;
    // step3:
    head = newNode;
}

// Insert a node at the tail of the linked list
void insertAtTail(Node *&head, Node *&tail, int data)
{

    // check for empty LL
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // step1:create a node
    Node *newNode = new Node(data);
    // step2: connect with a tail node
    tail->next = newNode;

    // step3: update tail
    tail = newNode;
}

 void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int findLength(Node* head){
    int len=0;
    Node*temp = head;
    while (temp!= NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
//  insert at any posistion
// Insert a node at any position
void insertAtPosition(int data, int position, Node*& head, Node*& tail) {
    if (head == NULL) {
        // Empty list; inserting at position 0
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
// if we insert at starting postion
    if (position == 0) {
        insertAtHead(head, tail, data);
        return;
    }

    int len = findLength(head);
// ending postion 
    if (position >= len) {
        insertAtTail(head, tail, data);
        return;

    }
    // middle postion find
    // step1: find prev and curr
int i =1;
Node*prev = head;
while (i<position)
{
   prev= prev->next;
   i++;
}
Node*curr = prev->next;
// step2
Node*newNode = new Node(data);
// step3

    newNode->next = curr;

    // step4
    prev->next = newNode;

    
}

// deletion
void deleteNode(int position, Node*&head, Node*&tail){
    if (head==NULL)
    {
        cout<<"cannot delete , LL is empty"<<endl;
        return;
    }
    // deleting first
     if (position == 1)
     {
        Node*temp = head;
        head= head->next;
        temp->next =NULL;
        delete temp;
        return;
     }
     int len = findLength(head);
    //  deleting last node
     if (position==len)
     {
        // find prev
        int i=1;
        Node* prev = head;
while (i<position-1)
{
  prev = prev->next;
  i++;  
}
// step2:
prev->next = NULL;
// step3:
Node* temp = tail;
// step4
tail = prev;
// step5
delete temp;
return;
     }
     
    // deleting the middle node
    //  step: find prev and cur
    int i=1;
    Node*prev = head;
    while (i<position-1)
    {
        prev = prev->next;
        i++;

    }
   Node*curr = prev->next; 
//    step2:
prev->next =curr->next;
// step3:
curr->next=NULL;
// step4
delete curr;
}

   Node* reverse(Node* &prev,Node* &curr){
    // base case
if (curr == NULL)
{
    // LL reverse to check
    return prev;

}
// 1 case solve then recursion will take care
Node* forward = curr->next;
curr ->next = prev;

reverse(curr,forward);

   } 
   Node* reverseusingLoop(Node* head){
    Node* prev = NULL;
    Node*curr = head;

    while (curr!= NULL)
    {
        Node* temp = curr->next;
        curr->next = prev;
        prev= curr;
        curr=temp;
    }
    return prev;
   }

   Node* reverseusingRecursion(Node* prev, Node* curr) {
        //base case
        if(curr == NULL) 
                return prev;

        Node* temp = curr ->next;
        curr ->next = prev;
        prev = curr;
        curr = temp;

        //recursion sambhal lega
        return reverseusingRecursion(prev, curr);
}
int main(){
Node*head=NULL;
Node*tail= NULL;
insertAtHead(head,tail,20);
insertAtHead(head,tail,50);
insertAtHead(head,tail,60);
insertAtHead(head,tail,90);
insertAtHead(head,tail,77);


print(head);
cout<<endl;
// cout<<"head:"<<head->data<<endl;
// cout<<"tail:"<<tail->data<<endl;


// insertAtPosition(101,5,head,tail);

// cout<<"Printing after insert at postion call"<<endl;
// print(head);
// cout<<endl;
// cout<<"head:"<<head->data<<endl;
// cout<<"tail:"<<tail->data<<endl;

// deleteNode(9,head,tail);
// cout<<endl;
// print(head);
cout<<endl;

Node* prev = NULL;
        Node* curr = head;
        cout << "printing reverse list" << endl;
        head = reverseusingRecursion(prev, curr);
        cout << endl;
        print(head);
        cout << endl;

}