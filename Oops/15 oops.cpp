// opearator overlodaing
#include<iostream>
using namespace std;
class param{
    public:
int val;
// operator overloading
void operator+(param& obj2){
    int value1 = this->val;
    int value2 = obj2.val;
    cout<<(value2-value1)<<endl;
}

};
int main(){
param object1, object2;
object1.val=7;
object2.val=2;

// this should print the differnce between them
 object1 + object2;
 
return 0;
}