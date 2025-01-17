/**Reberse the linked list in K groups eg 2,3,4 */
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next=NULL;

    }

};

void print(Node* head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    int len=0;
    Node* temp=head;
     while (temp!=NULL)
     {
       temp=temp->next;
       len++;
     }
     return len;
}
Node* reverseKNodes(Node* &head, int k){
    if (head==NULL)
    {
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    int len = getLength(head);
    if (k>len)
    {
        // cout<<"Enter the vaild value for k"<<endl;
        return head;
    }
    // it means number of nodes in LL IS=>k
    // stepA: reverse first k nodes of LL
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;
    int count =0;

    while (count<k)
    {
        forward = curr->next;
        curr->next =prev;
        prev = curr;
        curr= forward;
        count++;
    }
    if (forward!=NULL)
    {
        /* step B:we still have nodes left to reverse */
        // head->next = reverseKNodes(forward,k);
        // also write like that
        Node*recursionKaAns = reverseKNodes(forward,k);
        head->next = recursionKaAns;
    }
    // step c: retrun head of the modified LL
    return prev;
}

int main(){
Node* head= new Node(10);
    Node* second= new Node(20);
    Node* third= new Node(30);
    Node* fourth= new Node(40);
    Node* fifth= new Node(50);
    Node* sixth= new Node(60);

head->next = second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next= sixth ;
sixth->next=NULL;

print(head);
    head= reverseKNodes(head, 5);
    print(head);
    return 0;
}