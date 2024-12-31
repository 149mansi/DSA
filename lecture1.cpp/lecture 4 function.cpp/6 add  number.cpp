#include<iostream>
using namespace std;
int getsum(int n){
    int sum =0;
    for (int i = 1; i <=n; i++)
    {
    sum=sum+i;
    }
  return sum;  
}
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int ans = getsum(n);
    cout<<"Sum upto "<<n<<" is "<<ans<<endl;
    return 0;
}