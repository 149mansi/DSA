// store the value in vector form
#include<iostream>
#include<vector>
using namespace std;

void checkkey(string& str, int i, int n, char key,vector<int>&ans) {
    // base case
    if(i >= n) {
        // key not found
        
        return;
    }
    
    // check current character
    if (str[i] == key) {
        // store in vector
       ans.push_back(i);
    // return here if key is found
    }
    
    // recursive case
    checkkey(str, i + 1, n, key,ans);
}

int main() {
    string str = "lovebaber";
    int n = str.length();
    char key = 'b';
    int i = 0;
    vector<int>ans;
    checkkey(str, i, n, key,ans);
    cout<<"printing ans"<<endl;
    for (auto val : ans)
    {
       cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
