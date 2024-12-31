#include <iostream>
using namespace std;
// if take array number 10 but you get only two number then out of 8 they will be print zero
int main(){
    int arr[10]={1,2};
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// // if take array number 10 but you do not get any number then it will print garbage value
// int main(){
//     int arr[10];
//     for (int i = 0; i < 10; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// // if take array number 10 but you intiazalise number {0 } then all value print in output is zero
// int main(){
//     int arr[10]={0};
//     for (int i = 0; i < 10; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
// if take array number 10 but you intaizalistion number by 1 {1} then outoff arry sequence is intiazialtion by 1 but out of 9 number will be zero
int main(){
    int arr[10]={1};
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
