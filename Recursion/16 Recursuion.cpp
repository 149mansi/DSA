// substring store in vector
#include<iostream> 
#include<vector>
using namespace std;
void printSubstring(string str, string output, int i, vector<string>&v){
    // base case
    if (i>=str.length())
    {
        v.push_back(output);
        return;
    }
    // exclude
    printSubstring(str,output,i+1,v);
    // include
    output.push_back(str[i]);

    printSubstring(str,output,i+1,v);
}
int main(){
    string str= "abc";
    string output = " ";
    vector<string>v;
    int i=0;
    printSubstring(str,output, i,v);
    cout<<"printing all subseqeiunce"<<endl;
    for (auto val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl<<"size of vector is: "<<v.size()<<endl;
    return 0;
}
