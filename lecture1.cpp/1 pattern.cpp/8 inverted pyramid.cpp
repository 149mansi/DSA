// #include<iostream>
// using namespace std;
// int main(){
//     for (int row = 0; row < 6; row=row+1)
//     {
//         for (int col = 0; col<6-row; col=col+1)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
// }

#include<iostream>
using namespace std;
int main(){
    for (int row = 0; row < 6; row=row+1)
    {
        for (int col = 0; col < 6-row; col=col+1)
        {
           cout<<"*";
        }
        cout<<endl;
    }
    
}