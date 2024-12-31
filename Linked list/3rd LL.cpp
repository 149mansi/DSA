#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node() {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// I want to Insert a node right at the head of the linked list
void insertAtHead(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    
    // Update tail if the list was initially empty
    if (tail == NULL) {
        // LL-> empty list , first node ab add hogi
        tail = newNode;
    }
}

// Insert a node at the tail of the linked list
void insertAtTail(Node* &head, Node* &tail, int data) {
    // step1:create a node
    Node* newNode = new Node(data);
    // step2: connect with a tail node
    if (tail == NULL) {
        // first node ab add hone wail hai
        head = newNode;
        tail = newNode;
    } else {
        // LL is non-empty
        tail->next = newNode;
        
    }
    //step3: update tail 
    tail = newNode;
}

// Print the linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(head, tail, 77);
    print(head); // Output should be: 77

    insertAtHead(head, tail, 42);
    print(head); // Output should be: 42 77

    return 0;
}
