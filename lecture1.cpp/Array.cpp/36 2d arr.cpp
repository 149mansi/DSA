// 2d array deaclartion in vector
// same row and same cloumn 
// #include<iostream>
// #include<vector>
// using namespace std;
// int  main(){
//     vector<vector<int>> arr;
//     vector<int> a{1,2,3};
//     vector<int> b{4,5,9};
//     vector<int> c{12,8,9};

//     arr.push_back(a);
//     arr.push_back(b);
//     arr.push_back(c);

// numbr of rows niklt hai in 2d array with help of arr.size()
//     for (int i = 0; i < arr.size(); i++)
//     {
    // arr cols niklt hai arr[0].size() se only when same column we use arr[0].size(),(0 ke place apn 1 2 3 bhi use kar sakt hai )
//         for (int j = 0; j< arr[0].size(); j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//        cout<<endl; 
//     }
    
// return 0;

// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>arr;
    vector<int>a{1,2,3};
    vector<int>b{2,4,6};
    vector<int>c{7,8,9};
    
    arr.push_back(a);
arr.push_back(b);
arr.push_back(c);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
       cout<<endl; 
    }
    
}
