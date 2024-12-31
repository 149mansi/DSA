#include <iostream>
using namespace std;
class CirQueue
{
public:
    int size;
    int *arr;
    int front;
    int rear;

    CirQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        // queue is full
        if ((front == 0 && rear == size - 1) || ((rear+1 % size == front)))
        {
            cout << "Q is full, can not insert element" << endl;
        }

        // single element case-> first element insert

        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }

        // circular nature

        else if (rear = size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        // normal flow

        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop(){
        // empty check
        if (front == -1)
        {
           cout<<"Q is empty, cannot pop"<<endl;
           return;
        }

         // single element
        else if(front == rear){
            arr[front]=-1;
            front=-1;
            rear=-1;

        }

        // circular nature
        else if (front=size-1)
        {
            front=0;
        }
         // normal flow
         else
         {
            front++;
         }
         

    
       

        
       
    }
};
int main()
{

    CirQueue q(5);

    q.push(14);
    q.push(12);
    q.push(13);
    q.push(10);
    q.push(5);



    return 0;
}
