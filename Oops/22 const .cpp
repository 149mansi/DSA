// in class const example
#include<iostream>
using namespace std;
class abc {
mutable int x;
int *y;
const int z;
public:

abc(){
    x=0;
    y=new int(0);

}
// / ctor : old methods
// abc(int _x,int _y){
//     x=_x;
//     y=new int(_y);
    

// }
// Intialiszation list
abc(int _x, int _y, int _z=0):x(_x), y(new int (_y)),z(_z){
    cout<<"int init list"<<endl;
    *y=*y*10;
}
int getX() const{ 
    x=10;
    return x;
}
int setX(int _val)
{
    x=_val;
}

int getY() const{ 
    return *y;
}
int setY(int _val)
{
    *y=_val;
}
};

void printABC(const abc&a){
    cout<<a.getX()<<" "<<a.getY()<<endl;
}
int main(){

    abc a;
    printABC(a);
    
    return 0;
}