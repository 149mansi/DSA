// Doubly linked list
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    // Default constructor
    Node() {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    // Parameterized constructor
    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        cout<<"Node with values: "<<this->data<<"deleted"<<endl;
    }
};

// Function to print the linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next; // Use Next instead of next
    }
    cout << endl; // Optional: Adds a newline at the end of the output
}
// for find the length
int getLength(Node* head){
    int len=0;
    Node* temp = head;
    while (temp!=NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    if (head==NULL)
    {
        // LL is empty
        Node*newNode= new Node(data);
        head=newNode;
        tail = newNode;
    
    }
    else
    {
        // LL is non-empty
        // step1: create a node
        Node* newNode= new Node(data);
        // step2:
        newNode->next=head;
        // step3:
        head->prev = newNode;
        // step4;
        head= newNode;

    }
    
    
}
void insertAtTail(Node* &head, Node* &tail, int data){
    if (head== NULL)
    {
        Node* newNode = new Node(data);
        head= newNode;
        tail=newNode;
         
    }
    else
    {
        // LL is not empty
        Node*newNode = new Node(data);
        tail->next = newNode;
        newNode->prev=tail;
        tail=newNode;

    }
    
    
}
void insertAtPosition(Node* &head,Node* &tail, int data, int position){
    if (head==NULL)
    {
       Node*newNode = new Node(data);
       head=newNode;
       tail= newNode;
    }

    else
    {
        //LL is not empty
        if (position == 1)
        {
            insertAtHead(head,tail,data);
            return;

        }
         int len = getLength(head);
         if (position >=len)
         {
            insertAtTail(head,tail,data);
            return;
         }
        //  insertion in middle
        // step1: find prev& next
        int i=1;
        Node* prevNode = head;
        while (i<position-1)
        {
            prevNode = prevNode->next;
            i++;
        }
        Node*curr = prevNode->next;

        // step2:create a node
        Node*newNode = new Node(data);

        // step3: 
        prevNode->next = newNode;
        // step4:
        newNode->prev = prevNode;
        // step5
        curr->prev=newNode;
        // step6:
        newNode->next=curr;
    }
    
}
void deleteFromPos(Node* &head, Node* &tail,int position){
    if (head ==NULL)
    {
       cout<<"Linked list ids empty"<<endl;
       return;
    } 
    if (head->next == NULL)
    {
        // single node
        Node* temp= head;
        head = NULL;
        tail=NULL;
        delete temp;
        return;
    }
    int len = getLength(head);
    if (position>len)
    {
        cout<<"please enter a vaild position"<<endl;
        return;
    }
    
    if (position == 1)
    {
    //    want to delete the first node
    Node* temp= head;
    head = head->next;
    head->prev=NULL;
    temp->next=NULL;
    delete temp;
    return;
    }
    // int len = getLength(head);
    if (position == len)
    {
        // delete last node  
        Node* temp=tail;
        tail=tail->prev;
        temp->prev=NULL;
        tail->next=NULL;
        delete temp;
        return;


    }
    // delte from middle of linked list
    // step1: find,left,curr,right
    int i=1;
    Node* left = head;
    while (i<position-1)
    {
       left = left->next;
       i++;
    }
    Node*curr=left->next;
    Node* right = curr->next;

// step2: 
left->next=right;
// step3:
right->prev=left;
// step4
curr->prev = NULL;
// step5:
curr->next=NULL;
// step6:
delete curr;
return;
    
}
int main(){
    Node* first = new Node(10);
    Node* second= new Node(20);
    Node* third= new Node(30);
    Node* head = first;
    Node* tail = third;

    first ->next = second;
    second->prev = first;

    second->next = third;
    third->prev=second;

    print(first);
cout<<endl;


insertAtHead(head,tail,101);
cout<<endl;
print(head);
cout<<endl;

insertAtTail(head,tail,501);
cout<<endl;
print(head);
cout<<endl;

insertAtPosition(head,tail,123,2);
cout<<endl;
print(head);


deleteFromPos(head, tail,6);
cout<<endl;
print(head);
cout<<endl;


    return 0;
}