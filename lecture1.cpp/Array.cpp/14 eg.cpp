// // int mini and int max number print

// #include<iostream>

// // this procerssor is used for INT_MIN and INT_MAX
// #include<limits.h>
// using namespace std;
// int main(){
// int arr[]={2, 4 ,6, 8, 10 ,999,12,14,16,18,20, 67};
// int size=12;
// // intaizalise maxi variable with the
// // minimum possible  integer value
// // int maxi=INT_MIN;
// // if you find mini number then 
// int mini=INT_MAX;
// for (int i = 0; i < size; i++)
// {
//     // it for maximum number
//     // if (arr[i]>maxi)
//     // its for minimum number
//     if (arr[i]<mini)
//     {
//     //    found number greater than maxi , upadte maxi
//     mini=arr[i];
//     }
    
// }
// // cout<<"Maximum number is: "<<maxi<<endl;
// cout<<"Minmum number is: "<<mini<<endl;
// return 0;
// }



// maximum number found
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int arr[]={2, 4, 6, 8, 10, 12,14,16};
//     int size=8;
//     int maxi=INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//     if (arr[i]>maxi)
//     {
//         maxi=arr[i];
//     }
    
//     }
//     cout<<"maximum number is "<<maxi<<endl;


// }


// for minimum number found

#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={2, 4, 6, 8, 10, 12,14,16};
    int size=8;
    int mini=INT_MAX;
    for (int i = 0; i < size; i++)
    {
    if (arr[i]<mini)
    {
        mini=arr[i];
    }
    
    }
    cout<<"minimum number is "<<mini<<endl;

return 0;
}