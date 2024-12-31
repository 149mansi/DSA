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
    if ((front==0 && rear=size-1)|| ((rear+1% size==front)))
    {
    cout<<"Q is full, can not insert element"<<endl;
    return;
    }

    // 
    else if(front==-1){
        front=rear=0;
        arr[front]=data;
    }
    else if (front==0 &&rear!=size-1)
    {
        front=size-1;
        arr[front]=data;
    }
    else
    {
        front--;
        arr[front]=data;
    }
    
    
}

void pushFront(int data){
    if ((front == 0 && rear==size-1)|| ((rear+1% size==front)))
    {
       cout<<"Q is full, cannot insert"<<endl;
       return;
    }
    
    else if(front==-1){
        front=rear=0;
    }
    else if(front == 0 && rear!=size-1){
        front=size-1;
    }

    else
    {
        front--;
    }
    arr[front]=data;
}


void popFront(int data){
    if (front==-1)
    {
        cout<<"Q is empty, cannot pop"<<endl;
        return

    }
    else if(front==rear){
        arr[front]=-1;
        front=-1;
        rear=-1;
    }
    else if (front=size-1)
    {
      front=0;
    }
    else
    {
        front++;
    }
    
}


void popRear(int data){
    
}

};
int main(){

}