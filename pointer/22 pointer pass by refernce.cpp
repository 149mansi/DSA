// pass by value pointer
#include<iostream>
using namespace std;
void solve(int*p){
    p=p+1;

}
int main(){
    int a=5;
    int*p=&a;
    cout<<"before"<<p<<endl;
    solve(p);
    cout<<"After"<<p<<endl;
    return 0;
}