// charter index find out
#include<iostream>
using namespace std;
int checkkey(string& str,int i, int& n, char& key){
// base case
if(i>=n){
    // key not found
    return -1;
}
// ek case solve karne hai
if (str[i]==key)

    
    return i;

    // baaki recursion smbal lenga
    int ans = checkkey(str, i+1, n, key);
    return ans;


}
int main(){
    string str="lovebaber";
    int n= str.length();
    char key ='b';
    int i=0;
    int ans= checkkey(str,i, n, key);
    cout<<"answer is: "<<ans<<endl;
    return 0;

}