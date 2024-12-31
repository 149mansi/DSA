// Take 5 element of i/p array  & print their doubles
// arr[5]=[1 2 3 4 5]
// o/p =[2 4 6 8 10]
#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the values of array: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    cout<<"Printing the values of doubles: "<<endl;
    for (int i = 0; i <5; i++)
    {
    cout<<2*arr[i]<<" ";
    }
    
    return 0;

}
