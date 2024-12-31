// reomove the duplicates

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
    Node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;
}


void removeDuplicate(Node* &head){
    if (head==NULL)
    {
        cout<<"LL is empty"<<endl;
        return;
    }
    if (head->next==NULL)
    {
        // only one node is present
        cout<<"Single Node is LL"<<endl;
        return;
    }
    // more than 1 node is present
    Node* curr = head;
     while (curr!=NULL)
     {
        if ((curr->next!=NULL)&&(curr->data==curr->next->data))
        {Node*temp=curr->next;
            // equal
            curr->next=curr->next->next;
            // delete Node
            temp->next=NULL;
            delete temp;
        }
        else
        {
            // Not equal
            curr = curr -> next;
        }
        
     }
     
    
}
int main(){
Node*head=new Node(1);
Node* second=new Node(2);
Node* third = new Node(2);
Node* fourth=new Node(3);
Node* fifth = new Node(4);
Node* sixth=new Node(4);

head->next = second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=sixth;


cout<<"input LL:";
print(head);

removeDuplicate(head);
cout<<"output LL:";
print(head);
return 0;


}