// climb stairs . How many steps you want to reach that stairs meaning when you want to reach 3 satirs so how you want to reach that stairs
#include<iostream>
using namespace std;
int climbStairs(int n){
    // base case - stopping condition
    if (n==0|| n==1 )
    {
        return 1;
        int ans = climbStairs(n-1)+climbStairs(n-2);
        return ans;
    }
    
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int ans = climbStairs(n);
    cout<<"Answer is: "<<ans<<endl;
}