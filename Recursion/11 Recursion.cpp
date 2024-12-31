// count vairable for this letter
#include<iostream> 
using namespace std;
void checkKey(string&str,int i, int& n, char& key, int& count ){
    // base condition
    if (i>=n)
    {
        return;
    }
    if (str[i]==key)
    {
        count++;
    }
    return checkKey(str,i+1,n,key,count);
}
int main(){
    string str ="lovebabber";
    int n= str.length();
    char key='b';
    int i=0;
    // for counting strat 
    int count =0;
    checkKey(str,i,n,key,count);
    cout<<count<<endl;

}