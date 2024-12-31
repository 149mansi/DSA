#include<iostream>
#include<stack>
using namespace std;

class   Nstack{
int *arr, *top, *next;
int n;//no of stacks
int size; //size of main array
int freespot;//telles free space in array
public:
Nstack(int _n, int _s):n(_n),size(_s){
    freespot=0;
    arr=new int[size];
    top=new int[n];
    next=new int[size];

    for (int i = 0; i < n; i++)
    {
        top[i]=-1;
    }
    for (int i = 0; i < size; i++)
    {
      next[i]=i+1;
    }
    next[size-1]=-1;

}
// push X into Mth stack
bool push(int X,int m){
    if (freespot == -1)
    {
        return false;//stack overflow
    }
    // 1 . find index
    int index=freespot;
    //2. update freespot
    freespot=next[index];
    //3 insert
    arr[index]=X;
// 4 update next
next[index]=top[m-1];
// update top
top[m-1]=index;
return true; // push success
}
int pop(int m){
    if (top[m-1]==-1)
    {
        return -1;//stack underflow
    }
    int index=top[m-1];
    top[m-1]=next[index];
    int popElement = arr[index];
    next[index]=freespot;
    freespot=index;
return popElement;
}
~Nstack(){
    delete[] arr;
    delete[] top;
    delete[] next;
}
};
int main(){
Nstack s(3,6);
cout<<s.push(10,1)<<endl;
cout<<s.pop(1)<<endl;
}