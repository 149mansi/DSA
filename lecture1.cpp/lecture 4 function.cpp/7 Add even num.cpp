#include<iostream>
using namespace std;
int getEvensum(int n){
    // cout<<"inside getEvensum Function "<<endl;
    // cout<<"Value of n is "<<n<<endl;
    int sum =0;
    // cout<<"Intitial value of sum is "<<sum<<endl;
    for (int i = 2; i <=n; i=i+2)
    {
        // cout<<"for value of i: "<<i<<endl;
        sum=sum+i;
        // cout<<"sum now become: "<<sum<<endl;
        }
        // cout<<"returing sum= "<<sum<<endl;
        return sum;
    
}
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    // cout<<"calling getEvensum Function "<<endl;
    int ans= getEvensum(n);
    cout<<"Enter the sum "<<ans<<endl;
    return 0;
}