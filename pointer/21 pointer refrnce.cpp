// pointer ko pass by refernce 

#include<iostream>
using namespace std;
void solve(int* val){
    *val = *val+1;

}
int main(){
    int a=12;
    solve(&a);
    cout<<a<<endl;
    return 0;
}