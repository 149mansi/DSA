#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int row = 0; row < n; row=row+1)
    {
    for (int col = 0; col < n-row-1; col=col+1)
    {
        cout<<" ";
    }
    for (int col = 0; col< 2*row+1; col=col+1)
    {
        int start=1;
    if (row==0||row==n-1)
    {
        cout<<start;
        start=start+1;
    }
else
{
    cout<<" ";
}
else
{
    
    if (col==0)
    {
        cout<<1;
        else if (col==2*row+1-1)
        {
            cout<<row+1;
        }
        else
        {
            
            cout<<" ";
        }
        
    }
    
}
cout<<endl;
    
    }
    
    }
    
}
    // int n;
    // cin>>n;
    // for (int row  = 0; row < n; row=row+1)
    // {
    //     for (int col  = 0; col <n; col=col+1)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
//     for (int row  = 0; row <5; row=row+1)
//     {
//         if (row==0||row==4)
//         {
//             for (int col  = 0; col < 5; col=col+1){
//                 cout<<"* ";
//             }
//         }
//         else{
//         cout<<"* ";
//         for (int col = 0; col< 3; col=col+1)
//         {
//             cout<<"  ";
//         }
//         cout<<"* ";
        
//         }  
        
//       cout<<endl;  
    
        
//     }
    
    
// }
