#include<iostream> 
using namespace std;

int main() {
    int row = 5;
    int col = 3;
    int** arr = new int*[row];

    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }
    
    // Initialize the array (optional, just to avoid garbage values)
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = 0;  // or any value you want to initialize with
        }
    }
    
    // Printing
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {  // Corrected this line
            cout << arr[i][j] << " ";
        }
        cout << endl;  // To move to the next line after each row
    }
    
    // Free allocated memory (important to avoid memory leaks)(deallocate)
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    
    return 0;
}
