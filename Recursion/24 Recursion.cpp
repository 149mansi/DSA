#include<iostream>
using namespace std;
void reverse(string&s, int start, int end){
    // base case
    if (start>=end)
    {
        return;
    }
    // ek case solve 
    swap(s[start],s[end]);
    // baki RE sambhal lenga
    reverse(s, start+1, end-1);
}
int main(){
    string s;
    cout<<"Enter the sentence"<<endl;
    cin>>s;
reverse(s,0,s.size()-1);
cout<<"Print reverse sentence:  "<<s<<endl;
return 0;
    
}