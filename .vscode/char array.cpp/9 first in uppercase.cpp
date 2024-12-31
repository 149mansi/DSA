#include<iostream> 
#include<cstring>
using namespace std;

void convertIntoUpperCase(char arr[]) {
    int n = strlen(arr);
    for (int i = 0; i < n; i++) {
        // Check if the character is lowercase before converting
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
}

int main() {
    char arr[100] = "Mansi";
    convertIntoUpperCase(arr);
    cout << arr << endl;
    return 0;
}
