// Debug the code. Task is to rotate the linked list counter-clockwise by k nodes
#include <iostream>
using namespace std;

// Definition for singly-linked list node
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

// Function to rotate the linked list
void rotate(Node*& head, int k) {
    if (k == 0 || head == nullptr)
        return;

    Node* current = head;
    int count = 1;

    // Find the k-th node
    while (count < k && current != nullptr) {
        current = current->next;
        count++;
    }

    // If k is greater than the length of the list, no rotation needed
    if (current == nullptr)
        return;

    Node* kthNode = current;

    // Find the last node
    while (current->next != nullptr)
        current = current->next;

    // Rotate the list
    current->next = head;      // Link last node to head
    head = kthNode->next;      // Update head to k+1-th node
    kthNode->next = nullptr;   // Break the link
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original list: ";
    printList(head);

    int k = 2; // Number of positions to rotate
    rotate(head, k);

    cout << "Rotated list by " << k << " positions: ";
    printList(head);

    // Clean up memory (optional)
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
