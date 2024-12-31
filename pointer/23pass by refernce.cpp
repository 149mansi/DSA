#include<iostream>
using namespace std;
int* solve(int*p){
   int a=5;
   int *ans =&a;
   return ans;
}
int main(){
    int a=5;
    int*p=&a;
    cout<<"before"<<p<<endl;
    solve(p);
    cout<<"After"<<p<<endl;
    return 0;
}