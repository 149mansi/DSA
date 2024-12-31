#include<iostream>
#include<queue>
using namespace std;
int main(){
    // creation
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(2);
    // size
    cout<<"size of queue is:"<<q.size()<<endl;
    q.pop();
    cout<<"size of queue is: "<<q.size()<<endl;
    if (q.empty())
    {
        cout<<"Q is empty"<<endl;
    }
    else
    {
        cout<<"Q is not empty"<<endl;
    }
    
    cout<<"Front element is"<<q.front()<<endl;

    return 0;

    


}