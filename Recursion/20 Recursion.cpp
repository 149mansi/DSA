#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void solve(vector<int>& arr, int sum, int i, int &maxi) {
    // base case
    if (i >= arr.size()) {
        // maxi update
        maxi = max(sum, maxi);
        return;
    }
    // include
    solve(arr, sum + arr[i], i + 2, maxi);

    // exclude
    solve(arr, sum, i + 1, maxi);
}

int main() {
    vector<int> arr{1,2,3,4,5};
    int sum = 0;
    int maxi = INT_MIN;
    int i = 0;
    solve(arr, sum, i, maxi);
    cout << "Maximum sum: " << maxi << endl;
    return 0;
}
