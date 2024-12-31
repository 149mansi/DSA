#include<iostream>
#include<vector>
using namespace std;

void printSolution(vector<vector<char>>&board, int n)
{
// print
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout<<board[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl<<endl;
}

bool isSafe(int row, int col,vector<vector<char>>&board, int n ){
// check karana chahte h , ke kay main current cell [row, col] pr queen rakh sakta hu
int i=row;
int j=col;

// check now
while (j>=0)
{
    if (board[i][j]==1)
    {
       return false;
    }
    j--;
}


// check upper left diagonal
i=row;
j=col;
while (i>=0 && j>=0)
{
    if (board[i][j]=='Q')
    {
        return false;
    }
    i--; 
    j--;
}
// check bottom left diagonal
i=row;
j=col;
while (i<n && j>=0)
{
   if (board[i][j]=='Q')
   {
   return false;
   }
   i++;
   j--;
}
// kaha pr bhi queen nahi mile iska matlab ye postion safe nahi hai iska matlab return kardo true
return true;


}
void solve(vector<vector<char>>&board, int col, int n ){
    // base case
    if (col>=n)
    {
    printSolution(board,n);
    return;
    }
    // 1 case  solve karne hai , baki recusrion sbahle lenga

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            // rakh do
board[row][col]='Q';
            // recusrion solution lenga
            solve(board, col+1, n);
            // backtarking
board[row][col]='-';
        }
        
    }
    
}
int main(){
// nxn matrix
int n=4;
 
    }
int main(){
// nxn matrix
int n=4;
vector<vector<char>>board(n,vector<char>(n,0));
// first place 0 column
int col=0;
// 0 empty cell
// 1 queen at the cell
solve(board,col,n);
return 0;
} 