#include<iostream>
#include"bird.h"
using namespace std;
void birddoSomething(Bird*bird){
bird->eat();
bird->fly();
bird->eat();
bird->fly();
bird->eat();
bird->fly();
}

int main(){
    // Bird*bird = new sparrow();
     Bird*bird = new eagel();
birddoSomething(bird);
    return 0;
}