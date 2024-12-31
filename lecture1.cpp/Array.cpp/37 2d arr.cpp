// 2d array deaclartion in vector
// differient row and same differient
#include<iostream>
#include<vector>
using namespace std;
int  main(){
    vector<vector<int>> arr;
    vector<int> a{1,2,3};
    vector<int> b{4,5,9,8,9,};
    vector<int> c{12,8,9};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for (int i = 0; i < arr.size(); i++)
    {
        // when differnt cols rhghe tab size d=finf hoga column arr[i].size() se
        for (int j = 0; j< arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
       cout<<endl; 
    }
    
return 0;

}