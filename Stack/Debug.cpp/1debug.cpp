#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void nextGreaterElementRight(vector<int> input, int n){
		vector<int> right(n,-1);
		stack<int> s;
		for(int i=0; i<n; i++){
				if(s.empty()){
						s.push(i);
				}
				while(!s.empty() && input[s.top()] < input[i]){
						right[s.top()] = input[i];
						s.pop();
				}
		}
}

int main(){

// creation 
vector<int> st;

// insertion
st.push(10);
st.push(20);
st.push(30);
st.push(40);

// remove
st.pop();

// check element on top
cout<<"Element on top is: "<<st.top()<<endl;

// size
cout<<"size of element: "<<st.size()<<endl;

if (st.empty())
{
    cout<<"stack is empty"<<endl;
}
else
cout<<"stack is not empty"<<endl;

return 0;
}