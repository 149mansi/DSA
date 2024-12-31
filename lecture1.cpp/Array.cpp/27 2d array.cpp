// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int brr[3][3]={
//         {1,2,3},
//         {4,5,6},
//         {2,4,8}};

//         // row wise print
//         // outer loop
//         cout<<'row wise print' <<endl;
//         for (int i = 0; i <3; i++)
//         {
//             // for every row , we need to print value in each column
//             for (int j= 0; j < 3; j++)
//             {
//                 cout<<brr[i][j]<<" ";
//             }
//            cout<<endl;
//         }
//         cout<<"coulumn wise print "<<endl;
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j< 3; j++)
//             {
//                 cout<<brr[j][i]<<" ";
//             }
//             cout<<endl;
//         }

//         return 0;
// }

//         #include<iostream>
//         using namespace std;
//         int main(){
//             // decalre of 2d array
//             // int arr[3][3];

//             // intialize of 2d array
//             int brr[3][3]={
//                 {1,2,3,},
//                 {4,5,6},
//                 {2,4,8} };
//                 cout<<brr[1][1]<<endl;
// return 0;
//             }

// row wise print

// #include <iostream>
// using namespace std;
// int main()
// {
//     int brr[3][3] = {
//         {1,2,3},
        
//         {4, 5, 6},
//         {2, 4, 8}};
//     // row wise print
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << brr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// colmn wise print
#include <iostream>
using namespace std;
int main()
{
    int brr[3][3]={
                 {1,2,3,},
                {4,5,6},
                 {2,4,8} };
        for (int i = 0; i <3; i++)
                 {
                    for (int j= 0; j<3; j++)
                    {
                    cout<<brr[j][i]<<" ";
                    }
                   cout<<endl; 
                 }
                 
}