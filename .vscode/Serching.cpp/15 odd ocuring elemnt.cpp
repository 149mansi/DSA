// find the odd ocuring element in an array all element occurs even no of times except one.
#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
        {
            // single element
            return s;
        }
        // 2case-> mid - even or mid- odd
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
        }
        // 3 case odd
        else
        {

            if (arr[mid] == arr[mid - 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        mid=s+(e-s)/2;
    }
return -1;
}
int main()
{
    vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans = solve(arr);
    cout << "ans is " << ans << endl;
    cout<<"Value is "<<arr[ans]<<endl;
    return 0;
}