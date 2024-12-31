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

Node* reverse(Node* head){
    Node*prev=NULL;
    Node*curr=head;
    Node*next=curr->next;
while (curr!=NULL)
{
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
}
return prev;
}

bool checkPalindrome(Node* &head){
if (head==NULL)
{
    return false;
}
if (head->next==NULL)
{
    /*only 1 node*/
    return true;
}
/*1 node in LL*/
// stepA:find the middle node

Node*slow=head;
Node*fast=head->next;

while (fast!=NULL)
{
    fast=fast->next;
    if (fast!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    
}
Node*reverseLLkaHead =reverse(slow->next);
slow->next=reverseLLkaHead;


// comparsion
Node* temp1=head;
Node* temp2=reverseLLkaHead;
while (temp2!=NULL)
{
    if (temp1->data!=temp2->data)
    {
        return false;
    }
    else
    {
        temp1=temp1->next;
        temp2=temp2->next;
    }
    
}
return true;
}

int main(){
Node* head=new Node(10);
Node* second= new Node(20);
Node* third= new Node(30);
Node* fourth= new Node(40);
Node* fifth= new Node(50);

head->next=second;
second->next = third;
third->next=fourth;
fourth->next=fifth;

bool ispalindrome = checkPalindrome(head);
if (ispalindrome)
{
    cout<<"LL is a vaid palindrome"<<endl;

}
else{
    cout<<"LL is not valid palidrome"<<endl;
}



    return 0;
}