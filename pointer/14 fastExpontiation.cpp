#include<iostream>
using namespace std;
int fastExpontitaion(int a, int b){
    int ans=1;
    while (b>0)
    {
        if(b&1){
            // odd
            ans = ans*a;
        }
        a= a*a;
        b>>=1;
    }
    return ans;
}
int main(){
    cout<<fastExpontitaion(5,4)<<endl;

}