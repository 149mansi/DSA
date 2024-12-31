#include<iostream>
using namespace std;
int findMissing(int*a,int n){
    // visted method
   int xor1=0,xor2=0;
   int n=N-1;
   for (int i = 0; i < n; i++)
   {
    xor2=xor2^a[i];
    xor1=xor1^(i+1);
   }
   return xor1^xor2;
    
}
int main(){
    int n;
    int a[]={1,3,4,5};
    n=sizeof(a)/sizeof(int);
    findMissing(a,n);
    return 0;
}