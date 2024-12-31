// polymorphism
// complie time polymorphism
// function overloading
#include<iostream>
using namespace std;
class Maths{
    public:
    int sum(int a, int b){
        cout<<"I am in first Signature"<<endl;
        return a+b;

    }
    int sum(int a, int b, int c){
         cout<<"I am in second Signature"<<endl;
        return a+b+c;

    }
    int sum(int a, float b){
         cout<<"I am in third Signature"<<endl;
        return a+b+100;
    }
};
int main(){
    Maths obj;
    // cout<<obj.sum(2,5.12); // errror beacuse it is consider 5.12 is double 
     cout<<obj.sum(2,5.12f); // but we when add 5.12f then it is floating number
    return 0;
}