#include<iostream>
using namespace std;
// for single linked list
struct ListNode
{
    int data;
    ListNode* next;

    ListNode(int val) : data(val), next(nullptr){}
};
// function to delete the middle node
ListNode* deleteMiddle(ListNode*head){
    // check if the list is empty or has only one node
    if (head == NULL)
    return NULL;

    if (head->next ==NULL)
    {
        delete head; // freee memory for the only node
        return NULL;
    }
    ListNode *slow = head, *fast=head;
    ListNode *prev=NULL;

    // move slow pointer by 1 and fast pointer by2
    while (fast!=NULL && fast->next!=NULL)
    {
       prev=slow; /*keep track of the previous node */
       slow=slow->next;
       fast=fast->next->next;
    }
    // Delete the middel node
    prev->next = slow->next;  // Link previous node to the node after

    delete slow; // free memory of the middle node

    return head; // return the modified list
    
}

// function print the linked list
void printList(ListNode* head){
    ListNode*current = head;
    while (current!=nullptr)
    {
        cout<<current->data<<"->";
        current=current->next;

    }
    cout<<"Nullptr"<<endl;
    
}
int main(){
ListNode* head =new ListNode(1);
head->next = new ListNode(2);
head->next->next = new ListNode(3);
head->next->next->next = new ListNode(4);
head->next->next->next->next = new ListNode(5);

cout<<"original list: ";
printList(head);

// Delete the middle node
head= deleteMiddle(head);

cout<<"List after deleting the middle node:";
printList(head);

// clean up memory
ListNode* current=head;
// while (current!=nullptr)
// {
//      ListNode*temp = current;
//      current=current->next;
//      delete temp;
// }
return 0;
}