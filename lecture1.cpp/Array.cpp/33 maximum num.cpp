#include <iostream>
#include <limits.h>
using namespace std;
int maximum(int arr[][3], int row, int col)
{
int max = INT_MIN;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int minimum(int arr[][3], int row, int col)
{
    int min = INT_MAX;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
            }
    }
    return min;
}
int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << maximum(arr, row, col)<<" "<<"maximum"<<endl;
    cout << minimum(arr, row, col)<<" "<<"minimum"<<endl;
}


// #include <iostream>
// #include <limits.h>
// using namespace std;

// int maximum(int arr[][3], int rows, int cols) {
//     int max = INT_MIN;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             if (arr[i][j] > max) {
//                 max = arr[i][j]; // Corrected assignment
//             }
//         }
//     }
//     return max;
// }

// int main() {
//     int arr[3][3];
//     int rows = 3;
//     int cols = 3;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << "Maximum value: " << maximum(arr, rows, cols) << endl;
//     return 0;
// }
