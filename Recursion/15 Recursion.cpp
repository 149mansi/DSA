// substring question
#include<iostream>
using namespace std;
void  printSubstring(string str, string output, int i){
    // basde case
    if (i>=str.length())
    {
        cout<<output<<endl;
        return;
    }
    // exculude
    printSubstring(str, output, i+1);

    // include
    // below line is responsibe for concatenation of output string ans  ith charter  of str string
    
    
    // output.push_back(str[i]);
    output = output +str[i];
    printSubstring(str,output,i+1);
}
int main(){
    string str="abc";
    string output=" ";
    int i=0;
    printSubstring(str, output, i);
    return 0;
}