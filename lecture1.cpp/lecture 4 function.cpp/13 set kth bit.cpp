// Given number N and value of K from right set kth bit in the binary reprsentaion of N The postion of least significant bit (or last bit) is 0 the second last bit is 1 and so on. eg N=10 K=2 output 14

#include <iostream>
using namespace std;

int setKthBit(int N, int K) {
    // Set the Kth bit using bitwise OR
    int result = N | (1 << K);
    return result;
}

int main() {
    // Example
    int N = 10;
    int K = 2;
    // call by function
    int output = setKthBit(N, K);

    cout << output << endl;

    return 0;
}
