// polymorphism: operator overloading
#include<iostream>
using namespace std;
class Maths{
    public:
    int sum(int a, int b){
        cout<<"I am on first signature"<<endl;
        return a+b;

    }
    int sum(int a, int b, int c){
        cout<<"I am on second signature"<<endl;
        return a+b+c;    }

/*int sum(int a, double b)*/ int sum(int a, float b){
    cout<<"I am on thrid signature"<<endl;
return a+b+10;
}
};
int main(){
Maths obj;
// cout<<obj.sum(2,5);
cout<<obj.sum(2,5,10);

// when you pass floating number give error so we are using that value f
cout<<obj.sum(2,5.10f);
return 0;
}