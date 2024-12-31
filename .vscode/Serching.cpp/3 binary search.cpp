// predefined binary search algorthim for an array
// #include <iostream>     // std::cout
// #include <algorithm>    // std::binary_search, std::sort
// using namespace std;
// int main(){
    
//     int arr[]={1,2,3,4,5,6,7};
//     int size=7;
//     // predefind array function
//     if (binary_search (arr, arr+size, 0))
//     {
//         cout << "found"<<endl;
// }
// else{ 
//     cout << "not found."<<endl;
//     }
//     return 0;
// }
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6,7};
    int size=6;
    if (binary_search(arr,arr+size,7))
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
    return 0;
}
