#include <iostream>
// vector array file
#include<vector>
using namespace std;
int main(){
    // declare vector array
 vector<int>arr;
    int ans=(sizeof(arr)/sizeof(int));
    cout<<ans<<endl;

    cout<<arr.size()<<endl;
   cout<<arr.capacity()<<endl;

//    insert the array
 arr.push_back(10);
arr.push_back(6);
for (int i = 0; i<arr.size(); i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
// remove / delete
arr.pop_back();
for (int i = 0; i <arr.size(); i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

vector<int>brr(10,-1);
cout<<"sizeof b "<<brr.size()<<endl;
cout<<"capacity of "<<brr.capacity()<<endl;
for (int i = 0; i <brr.size(); i++)
 {
    cout<<brr[i]<<" ";
}
 cout<<endl;
int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;
vector<int>brr(n,6);
cout<<"Size of b:"<<brr.size()<<endl;
cout<<"capacity of b:"<<brr.capacity()<<endl;

for (int i = 0; i <brr.size(); i++)
{
    cout<<brr[i]<<" ";
}
cout<<endl;
cout<<"printing crr"<<endl;
vector<int>crr{10,20,30,40};
for (int i = 0; i <crr.size(); i++)
{
    cout<<crr[i]<<" ";
}
cout<<"vector crr is empty "<<crr.empty()<<endl;
// if true print empty function  1
// if false print empty function 0
vector<int>drr;
cout<<"vector drr is empty "<<drr.empty()<<endl;
    return 0;
}

// #include<iostream>
// #include<vector>

// using namespace std;
// int main(){
// // create a vector
// vector<int>arr;
// }