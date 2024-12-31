// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for (int row = 0; row< n; row++)
//     {
        
//         int k=0;//Counter to track stars
//         for (int col  = 0; col <((2*n)-1); col++)
//         {
//             // 1starting space
//             if (col<n-row-1)
//             {
//                 cout<<"  ";//Leading spaces
//             }
//             // 2for * print
//             else if (k<2*row+1)
//             {
//                 if (k==0||k==2*row||row==n-1)
                
//                     cout<<"* "; //Edge and base stars
//                     // 3 for space
//                 else
                
//                     cout<<"  "; //Internal spaces
//                     k++; // Incremeent counter
//             }
//             else
//             {
//                 cout<<"  "; //Trailing spaces
//             }
//               }
//         cout<<endl;
//     }
    
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // full pyramid
    for (int row = 0; row < n; row=row+1)
    {
        for (int col = 0; col < n-row-1; col=col+1)
        {
           cout<<" ";
        }
       for (int col = 0; col < row+1; col=col+1)
       {
        cout<<"* ";
       }
       cout<<endl;
    }

    // inverted full pyramid
    for ( int row = 0; row < n; row=row+1)
    {
        for (int col = 0; col < row; col=col+1)
        {
            cout<<" ";
        }
        for (int  col = 0; col < n-row; col=col+1)
        {
           cout<<"* ";
        }
        cout<<endl;
    }
    
    
}