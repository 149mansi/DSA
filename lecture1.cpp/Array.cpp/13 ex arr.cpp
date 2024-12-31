// Array to find 1 and 0 
// count 0 and 1
#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,1,1,1,0,0,1,1,0,1,0,1};
	int size = 13;
	// for example we add 2 3 4 5
// int arr[] = {0,1,1,1,0,0,0,0,1,0,1,0,1,0,1, 2, 4 ,5, 7};
// 	int size = 19;
    
int numZero=0;
int numOne=0;
for (int i = 0; i < size; i++)
{
    // if zero found increment numZero
    if (arr[i]==0)
    {
        numZero++;
    }
    // if one found increment numOne
    if (arr[i]==1)
    {
       numOne++;
    }
    
}
cout<<"Number of zeros: "<<numZero<<endl;
cout<<"Numbwer of ones : "<<numOne<<endl;

}