// multiple inheritanc: when same inheritance then . its diamond problem or ambuguity problme thne we are used  scope resolation opeartor(:)
#include<iostream>
using namespace std;
class A{
    public:
    int  chemistry;
    A(){
        chemistry = 110;
    }

};
class B{
    public:
    int chemistry;
    B(){
        chemistry = 410;
    }
};
class c: public A, public B{
public:
int maths;
};
int main(){
    c obj;
    cout<<obj.B::chemistry<<" "<<obj.maths<<endl;
    return 0;
}