#include<iostream>
#include<vector>
using namespace std;

pair<int, int> fun(vector<int>&arr, int x, int y, int n){
    arr[x-1]=y;
    int ans=1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=arr[i-1])
        {
            ans+=1;
        }
        
    }
    return make_pair(ans,0);
}
int main(){
int n;
cout<<"Enter Number of Students: "<<endl;
cin>>n;
int k;

cout<<"Enter Number of re-evalutions ";
cin>>k;
vector<int> arr(n);
for (int i = 0; i < n; i++)
{
   cout<<"Enter marks of student:"<<i+1<<";";
   cin>>arr[i];
}
for (int i = 0; i <k; i++)
{
    int x, y;
    cout<<"Enter the matrix postion to update: ";
    cin>>x;
    cout<<"Enter the re-evaluated marks";
    cin>>y;
    pair<int, int>result = fun(arr, x,y,n);
    cout<<"Number of students part of merit list are:"<<result.first<<endl;
    return 0;

}


}