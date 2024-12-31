// push and pop the element
/*
The program pushes four integers onto the stack and then pops and prints them in reverse order (from the topmost to the bottommost element).
*/
#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int> s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);


while (!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}
cout<<endl;
return 0;
}