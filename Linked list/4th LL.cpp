#include <iostream>
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtTail(head, tail, 77);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 90);
    insertAtHead(head, tail, 20);
    
print(head);
    return 0;
}
