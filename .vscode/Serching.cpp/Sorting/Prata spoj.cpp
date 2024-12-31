#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossibleSolution(vector<int>cookRanks,int nP,int mid){
int curP=0; //intial cooked prata count
for (int i = 0; i < cookRanks.size(); i++)
{
    // find rank
int R = cookRanks[i],j=1;
int timeTaken=0;
while (true)
{
    // for first cook c1 ko bolnke ghe ki tu is time me itana cook kar ke de skat hai kay ha to fir karde nhi to dusre ko de c2 ko
if (timeTaken +j *R<=mid)
{
++curP;
timeTaken +=j*R;
++j;
}// overshoot ho gya time minus mid se jada hogaya time to
else
{
   break; 
}

}
if (curP>=nP)
{
    return true;
}

}
return false;
}
int minTimeToCompleteOrder(vector<int>cookRanks,int nP){
int start =0;
int highestRank = *max_element(cookRanks.begin(),cookRanks.end());
int end=highestRank*(nP*(nP+1)/2);
int ans=-1;
while (start<=end)
{
    int mid = (start+end)/2;
    if (isPossibleSolution(cookRanks,nP,mid))
    {
        ans=mid;
        end=mid-1;
    }
    else
    {
        
        start = mid+1;
    }
    
    
}
return ans;
}
 int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int nP,nC;
        cin>>nP>>nC;
        vector<int>cookRanks;
        while (nC--)
        {
        int R;
        cin>>R;
        cookRanks.push_back(R);
        }
        cout<<minTimeToCompleteOrder(cookRanks,nP)<<endl;
    }
    
 }