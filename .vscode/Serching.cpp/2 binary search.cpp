// predefined binary search algorthim in vector
#include <iostream>     // std::cout
#include <algorithm>    // std::binary_search, std::sort
#include <vector> 
using namespace std;
int main(){
    vector<int>v{1,2,3,4,5,6};
    // predefind function
    if (binary_search (v.begin(), v.end(), 2))
    {
        cout << "found"<<endl;
}
else{ 
    cout << "not found."<<endl;
    }
    return 0;
}
