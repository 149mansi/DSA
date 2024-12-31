#include<iostream>
using namespace std;
int main(){
    int arr[10];
// int*ptr=arr; 
// int*ptr=&arr;
// int*ptr=arr;
// int*ptr=&arr[0]
int(*ptr)[10]=&arr;
for (int i = 0; i < 10; i++)
{
    // cout<<ptr[i]<<endl;
     cout<<(*ptr)[i]<<endl;
}



  return 0;
  
}