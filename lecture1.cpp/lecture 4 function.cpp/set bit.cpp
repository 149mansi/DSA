#include<iostream>
using namespace std;
void printBinary(int num){
    for (int  i = 10; i >=0; --i)
    {
    cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main(){
    printBinary(9);
    
int a=9;
int i=1;
if ((a&(1<<i))!=0)
{
    cout<<"set Bit";
}
else
{
    cout<<"not set bit";
}
// bit set  (a|(1<<i))
printBinary(a|(1<<1));
// bit unset
printBinary(a&(~(1<<3)));

}