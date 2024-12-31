#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int> input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);

    stack<int> s;

s.push(-1);
vector<int> ans(input.size());
for (int i = input.size()-1; i >=0 ; i--)
{
    int curr= input[i];
    // apka answer stack me store 
    while (s.top()>=curr)
    {
         s.pop();
    }
    // chota element mil chuka hai -> ans store
    ans[i]=s.top();
    // push kardo curr element ko
    s.push(curr);

}

cout<<"printing"<<endl;
for (int i = 0; i <input.size() ; i++)
{
   cout<<ans[i]<<" ";
}
cout<<endl;

    

}