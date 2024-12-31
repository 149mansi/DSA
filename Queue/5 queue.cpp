#include<iostream>
#include<deque>
using namespace std;
int main(){
    // creation
    deque<int> dq;
    dq.push_front(5);
    dq.push_front(10);
    dq.push_back(20);
    dq.push_back(30);

    cout<<"size: "<<dq.size()<<endl;
    dq.pop_front();
    cout<<"size:"<<dq.size()<<endl;
    if (dq.empty())
    {
        cout<<"Q is empty"<<endl;
    }
    
    
    else
    {
        cout<<"Q is not empty"<<endl;
    }
    return 0;
}