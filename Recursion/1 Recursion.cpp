#include<iostream>
using namespace std;
int factorial(int n){
    cout<<"Function is called for n: "<<n<<endl;
    // 1 based case
    if (n==0)
    {
        return 1;
    }
    int chotiProblemAns=factorial(n-1);
    int badiProblemAns = n*chotiProblemAns;
    return badiProblemAns;
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int ans= factorial(n);
    cout<<ans<<endl;
    return 0;
}