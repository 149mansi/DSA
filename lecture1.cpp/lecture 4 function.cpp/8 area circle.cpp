#include<iostream>
using namespace std;
float circle_area( float radius){
    float area=3.14*radius*radius;
    return area;
}
int main(){
    float radius;
    cin>>radius;
    // call the function
    float area=circle_area(radius);
    cout<<"Area of circle is: "<<area<<endl;

}