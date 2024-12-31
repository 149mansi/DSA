#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int k=n;

    for (int row = 0; row< n; row=row+1)
    {
        int num=1;
        for (int col = 0; col <k; col=col+1)
        {
            if (col<n-row-1)
            {
                cout<<" ";
            }
            else if(col<=n-1){
cout<<num;
num++;
       }
       else if (col==n)
       {
        num=num-2;
        cout<<num;
        num--;
       }
       else
       {
        cout<<num;
        num--;
       }
       
       
             }
             k++;
       cout<<endl;
    }
    
}