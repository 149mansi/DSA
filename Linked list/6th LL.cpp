// postion at null
#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

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

    if (position == 0) {
        insertAtHead(head, tail, data);
        return;
    }
// cout<<"calculating length"<<endl;
    int len = findLength(head);
// cout<<"length is"<<len<<endl;
    if (position >= len) {
        insertAtTail(head, tail, data);
        return;

    }
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


int main(){
Node*head=NULL;
Node*tail= NULL;



print(head);
cout<<endl;
// cout<<"head:"<<head->data<<endl;
// cout<<"tail:"<<tail->data<<endl;


insertAtPosition(101,5,head,tail);

cout<<"Printing after insert at postion call"<<endl;
print(head);
cout<<endl;
cout<<"head:"<<head->data<<endl;
cout<<"tail:"<<tail->data<<endl;



return 0;

}