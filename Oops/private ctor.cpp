// yes constructor can made private with another class
#include<iostream>
using namespace std;
class Box{
    int width; 
    Box(int _w):width(_w){};


     public:
    //  constuctor
     
     int getWidth()const{
        return width;

     }
void setwidth(int _val)
{
    width= _val;
}
friend class BoxFactory;
};

class BoxFactory{
    int count;
    public:
    Box getABox(int _w)
    {
    ++count;
    return Box(_w);
    }
};

int main(){
    // Box b(5);
    // cout<<b.getWidth()<<endl;
    return 0;
}