// if space
#include<iostream> 
#include<cstring>
using namespace std;

void convertIntoTitleCase(char arr[]) {
    int n = strlen(arr);
    bool capitalizeNext = true;

    for (int i = 0; i < n; i++) {
        if (arr[i] == ' ') {
            capitalizeNext = true;
        } else {
            if (capitalizeNext && arr[i] >= 'a' && arr[i] <= 'z') {
                arr[i] = arr[i] - 'a' + 'A';
                capitalizeNext = false;
            } else if (!capitalizeNext && arr[i] >= 'A' && arr[i] <= 'Z') {
                arr[i] = arr[i] - 'A' + 'a';
            } else {
                capitalizeNext = false;
            }
        }
    }
}

int main() {
    char arr[100] = "mansi utane";
    convertIntoTitleCase(arr);
    cout << arr << endl;
    return 0;
}
