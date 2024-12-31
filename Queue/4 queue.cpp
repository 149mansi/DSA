// deque
#include<iostream>
using namespace std;

class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void pushrear(int data){
        // queue is full
        if ((front==0 && rear==size-1)|| ((rear+1% size == front))){
        cout<<"Q is full, can not insert element"<<endl;
        return;

        }
    //    single element case->first element insert
    else if(front==-1){
        front =rear=0;
        arr[front]=data;
    }
    // circualr nature
    else if(front==0 && rear !=size-1)
    {
        front =size-1;
        arr[front]=data;
    }
    else
    {
        front--;
          arr[front]=data;
    }
    
    }


    void pushfront(int data){
        if ((front==0 && rear==size-1)||((rear+1 %size==front)))
        {
           cout<<"Q is full, can not insert element"<<endl;
           return;
        }
        // single element case-> first element insert
        else if(front ==-1){
            front =rear=0;
            arr[rear]=data;
        }
        // circular nature
        else if(rear = size-1 && front!=0){
            rear =0;
            arr[rear]=data;

        }
        // normal flow
        else
        {
            rear++;
            arr[rear]=data;
        }
        
    }

    void popFront(){
        if (front==-1)
        {
            cout<<"Q is empty, cannot pop"<<endl;
            return;

        }
        else if(front == rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(front=size-1){
            arr[front]=-1;
            front=0;
        }
        else
        {
            arr[front]=-1;
            front++;
        }
        
        
    }

    void popRear(){
        if (front==-1)
        {
           cout<<"Q is empty, cannot pop"<<endl;
           return;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(rear==0){
             arr[rear]=-1;
            rear=size-1;
        }
        else
        {
             arr[rear]=-1;
            rear--;
        }
        
       
    }

    void print(){
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Deque dq(10);
    // dq.print();

    dq.pushrear(10);
    dq.pushrear(20);
    dq.pushrear(30);
    dq.pushrear(40);
    dq.pushrear(50);
    dq.pushrear(60);
    dq.pushrear(70);
    dq.pushrear(80);
    dq.pushrear(90);
    
    
dq.print();
dq.popRear();
dq.print();
    return 0;
}