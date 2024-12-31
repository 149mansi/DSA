// create your own stack
#include<iostream>
using namespace std;
class Stack{
    public:
    // property
    int *arr;
    int top;
    int size; // this size for total number of arrays not total number of elements

    Stack(int size){
        // memeory allocate
        arr= new int[size];
        this->size=size;
        top=-1;

    }

    // functions
    void push(int data){
        if (size-top>1)
        {
        //    space availabe
        // insert 
        top++;
        arr[top]=data;


        }
        else
        {
            // sapce not avaliable
            cout<<"Stack overflow"<<endl;
        }
        
        

    }
    void pop(){
        if(top==-1){
            // stack is empty
            cout<<"stack underflow, cant delete element"<<endl;
        }
        else
        {
            // stack is not empty
            top--;
        }
        

    }

    int getTop(){
        if (top==-1)
        {
           cout<<"There is not element in stack"<<endl;
        }
        else
        {
            return arr[top];
        }
        

    }

    int getSize(){
return top+1;
    }

    bool isempty(){
if (top==-1)
{
    return true;
}
else
{
    return false;
}

    }
};
int main(){
  Stack s(6);

//   insertion
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);

while (!s.isempty())
{
 cout<<s.getTop()<<" ";
 s.pop();
} cout<<endl;
cout<<"size of stack "<<s.getSize()<<endl;

s.pop();
return 0;

}