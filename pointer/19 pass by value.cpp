// integer pass by value
#include<iostream>
using namespace std;
void solve(int num){
    num++;
}
int main(){
    int a=5;
    solve(a);
    cout<<a<<endl;
    return 0;
}