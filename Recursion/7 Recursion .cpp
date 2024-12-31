// charter find in this problem
#include<iostream>
using namespace std;
bool checkkey(string& str,int i, int& n, char& key){
// base case
if(i>=n){
    // key not found
    return false;
}
// ek case solve karne hai
if (str[i]==key)

    return true;

    // baaki recursion smbal lenga
    bool ans = checkkey(str, i+1, n, key);
    return ans;


}
int main(){
    string str="lovebaber";
    int n= str.length();
    char key ='m';
    int i=0;
    bool ans= checkkey(str,i, n, key);
    cout<<"answer is: "<<ans<<endl;
    return 0;

}