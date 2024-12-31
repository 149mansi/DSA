// MACROS DEFINE
#include<iostream>
using namespace std;
// macros cretaed
#define PI 3.14

#define MAX(x,y)(x>y?x:y)

float circleArea(float r){
return PI * r * r;
}

void fun(){
    int x=6;
    int b=17;
    int c= MAX(x,b);
}


void fun3(){
    int a=6;
    int b=17;
    int c= MAX(a,b);
}

void fun4(){
    int x=6;
    int y=17;
    int c= MAX(x,y);
}

int main(){
   
cout<<circleArea(65.4)<<endl;
return 0;
}