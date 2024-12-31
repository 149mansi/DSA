// multilevel inheriatnce

/*#include<iostream>
using namespace std;
class A{
    public:
    int physics;


};
class B{
    public:
    int chemistry;
};
class C:public A, public B{
    public:
    int maths;

};
int main(){
    C obj;
    cout<<obj.physics<<" "<<obj.chemistry<<" "<<obj.maths<<endl;
    return 0;
}
*/

// when same name in both class then we will used scope resolution operator
#include<iostream>
using namespace std;
class A{
    public:
    int chemistry;
    A(){
        chemistry =101;
    }


};
class B{
    public:
    int chemistry;
    B(){
        chemistry=410;
    }
};
class C:public A, public B{
    public:
    int maths;

};
int main(){
    C obj;
    cout<<" "<<obj.B::chemistry<<" "<<obj.maths<<endl;
    return 0;
}