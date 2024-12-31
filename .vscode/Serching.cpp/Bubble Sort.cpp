#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 1, 7, 6, 14, 9};
    int n = arr.size();
    // Bubble Sort
    // logic1
    // for(int round=0;round<n-1;round++) 
    // logic2
    for (int round=1; round < n; round++)
    {
        // logic1
        // for (int  j = 0; j < n-round-1;j++)
        // logic2 
    for (int j = 0; j < n - round; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    // printing
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}