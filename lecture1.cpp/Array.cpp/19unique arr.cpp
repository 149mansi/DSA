// #include<iostream>
// #include<vector>
// using namespace std;
// int findunique(vector<int>arr){
//     int ans=0;
//     // for(int i=0; i<arr.size(); i++) {
// 	// 	ans = ans ^ arr[i];
// 	// }
//     for (int i=0; i<arr.size(); i++)
//     {
//      ans=ans^arr[i];
//     }
//    return ans; 
// }
// int main(){
//     int n;
    
//     cout<<"Enter the size of array: "<<endl;
//     cin>>n;
//     vector<int>arr(n);
//     cout<<"Enter the elements : "<<endl;
//     // taking input
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cin>>arr[i];
//     }
//     // creating the function
//     int uniqueElement = findunique(arr);
//     cout<<"UniqueElement "<<uniqueElement<<endl;
    
//  }
// // 1) xor concept 

// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // int findUnique(vector<int> arr) {
// // 	int ans = 0;

// // 	for(int i=0; i<arr.size(); i++) {
// // 		ans = ans ^ arr[i];
// // 	}

// // 	return ans;
// //      }
// //      int main(){
// // int n;
// // 	cout << "Enter the size of array " << endl;
// // 	cin >> n;


// // 	vector<int> arr(n);
// // 	cout << "Enter the elements " << endl;
// // 	//taking input
// // 	for(int i=0; i<arr.size(); i++) {
// // 		cin >> arr[i];
// // 	}

// // 	int uniqueElement = findUnique(arr);

// // 	cout << "Unique Element is  " << uniqueElement << endl;
// //     }


// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // int findUnique(vector<int>arr){
// //     int ans=0;
// //     for (int i = 0; i < arr.size(); i++)
// //     {
// //         ans = ans^arr[i];

// //     }
// //     return ans;
    
// // }
// // int main(){
// //     int n;
// //     cout<< "Enter the elemet"<<endl;
// //     cin>>n;
// //     vector<int>arr(n);
// //    cout << "Enter the size of array " << endl;
// //     // taking input
// //     for (int i = 0; i < arr.size(); i++)
// //     {
// //         cin>>arr[i];
// //     }
// //     int uniqueElement= findUnique(arr);
// //     cout<<"unique element"<<uniqueElement<<endl;
// // }

#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr) {
    int ans = 0;

    // XOR all elements in the array
    for (int i = 0; i < arr.size(); i++) {
        ans ^= arr[i];
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    int uniqueElement = findUnique(arr);

    cout << "Unique Element is: " << uniqueElement << endl;
    return 0;
}
