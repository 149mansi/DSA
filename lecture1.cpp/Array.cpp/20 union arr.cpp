// union of 2 arrays
// I/P={2,4,6,8}
// {6 7 8 9}
// 0/p={2 ,4,6,8,6,7,8,9}
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//    int arr[] ={1,3,5,7,9};
//    int sizea=5;
//    int brr[]={2,4,6,8};
//    int sizeb=4;
//    vector<int>ans;
// //    push all vector arr
//    for (int i = 0; i < sizea; i++)
//    {
//     ans.push_back(arr[i]);
//    }
// //    push all vector brr
//  for (int i = 0; i < sizeb; i++)
//    {
//     ans.push_back(brr[i]);
//     }
//     cout<<"Printing the array"<<endl;
//     for (int i = 0; i < ans.size(); i++)
//     {
//     cout<<ans[i]<<" ";
//     }
    
	
//     // for(int i=0; i<ans.size(); i++) {
// 	//  	cout << ans[i] << " " ;
// 	// }
//    return 0; 
// }

// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;
// int main(){
// int arr[]={1,4,2,7,8};
// int sizea=5;
// int brr[]={2,4,6,8};
// int sizeb=4;
// vector<int>ans;
// for (int i = 0; i <sizea; i++)
// {
//    ans.push_back(arr[i]);
// }

// for (int i= 0; i <sizeb; i++)
// {

//    ans.push_back(brr[i]);
// }


// cout<<"printing ans array"<<endl;
// for (int i = 0; i < ans.size(); i++)
// {
//    cout<<ans[i]<<" ";
// }

// return 0;
// }

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
    int arr[] = {1, 4, 2, 7, 8};
    int sizea = 5;
    int brr[] = {2, 4, 6, 8};
    int sizeb = 4;
    vector<int> ans;

    for (int i = 0; i < sizea; i++) {
        ans.push_back(arr[i]);
    }

    for (int i = 0; i < sizeb; i++) {
        // Check if the element is already in 'ans'
        bool found = false;
        for (int j = 0; j < ans.size(); j++) {
            if (ans[j] == brr[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            ans.push_back(brr[i]);
        }
    }

    // Print the contents of the 'ans' vector
    cout << "Printing ans array: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
