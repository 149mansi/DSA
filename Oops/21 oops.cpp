#include<iostream>
using  namespace std;
int main(){
    const int x=5;//x cannot be change
    // intaizaliation can be done. but we can't resign a value
    // int x=5;
    cout<< x<<endl;


    // 2const with pointers
    // const int *a= new int(2);// const data , non const pointer
    // cout<<*a<<endl;
    // // *a=20;// cant chnge the content of pointer
    // cout<<*a<<endl;
    // int b=20;
    // a=&b;// pointer iteself can be reassigned
    // cout<<*a<<endl;

// 3const pointe but non-const data
// int *const a=new int(2);
// cout<<*a<<endl;
// *a=20;
// cout<<*a<<endl;
// // int b=50;
// // a=&b;// nahi run hoga beacuse of const pointer


// 4 const pointer , const data
// we cant chnge anything becuase const of pointer  and const of data also constant so we cant modify anything
// const int *const a= new int(10);
// cout<<*a<<endl;
// *a=50;
// int b=100;
// a=&b;


    return 0;
}