// Take one array just like arr[5]={1,3,4,5,7} and this array make equal to  {1 1 1 1 1}
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,3,4,5,7};
    for (int i = 0; i <5; i++)
    {
        arr[i]=1;
    }
    for (int i = 0; i < 5; i++)
    {
cout<<arr[i]<<" ";
    }
    
    return 0;
}

