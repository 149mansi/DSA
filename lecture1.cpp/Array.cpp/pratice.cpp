#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[]={2,4,6,8,10,12,14,16,18};
    int size=9;
    int maxi=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>maxi)
        {
            maxi=arr[i];
        }
        
    }
    cout<<"maximum number is"<<maxi<<endl;
}