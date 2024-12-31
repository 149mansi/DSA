#include <iostream>
using namespace std;
int main(){
    int arr[4]={12,44,66,18};

/*cout<<arr<<endl;
cout<<arr[0]<<endl;
cout<<&arr<<endl;
cout<<&arr[0]<<endl;*/
    
   /*int*P = arr;
   cout<<P<<endl;
cout<<&P<<endl;*/

// cout<<*arr<<endl;
// cout<<arr[0]<<endl;
// cout<<*arr+1<<endl;
// cout<<*(arr)+1<<endl;
// cout<<*(arr+1)<<endl;
// cout<<arr[1]<<endl;
// cout<<*(arr+2)<<endl;
// cout<<arr[2]<<endl;
// cout<<*(arr+3)<<endl;
// cout<<arr[3]<<endl;

//all represnt whould be same
int i=0;
cout<<arr[i]<<endl;
cout<<i[arr]<<endl;
cout<<*(arr+i)<<endl;
cout<<*(i+arr)<<endl;


// arr has same base address we cant change value of base address
// try
// arr= arr+2; give a error

int*p=arr;
p=p+2;
     return 0;
}