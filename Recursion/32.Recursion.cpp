#include <iostream>
#include <vector>
using namespace std;
bool isSafe(int value, int board[][9], int cur_row, int cur_col)
{
    // row check
    for (int col = 0; col < 9; col++)
    {
        if (board[cur_row][col] == value)

            return false;
    }
    // column check
    for (int row= 0; row <9; row++)
    {
        if (board[row][cur_col]==value)
        {
            return false;
        }
        
    }
    // 3*3 box
    for (int i = 0; i < 9; i++)
    {
        if (board[3*(cur_row/3)+(i/3)][3*(cur_col/3)+(i%3)]==value)
        {
            return false;
        }
        
    }
    return true;
}
// this function retiurn true or false basis on we found a solution or not
bool solve(int board[9][9], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // check for empty cell
            if (board[i][j] == 0)
            {
                for (int value = 1; value <= 9; value++)
                {
                    // check fro saftey
                    if (isSafe(value, board, i, j))
                    {
                        // insert
                        board[i][j] = value;
                        //   baki recursion smbhal lenga
                        bool aagekasolution = solve(board, n);
                        if (aagekasolution == true)
                        {
                            return true;
                            // backtarcking
                            board[i][j] = 0;
                        }
                    }
                }
            }
            
        }
    }
    return false;
}
int main()
{
    int board[9][9] = {
        // 0 reprsent the empty cell
        {4, 5, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 2, 0, 7, 0, 6, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 2, 8},
        {0, 0, 9, 5, 0, 0, 0, 0, 0},
        {0, 8, 6, 0, 0, 0, 2, 0, 0},
        {0, 2, 0, 6, 0, 0, 7, 5, 0},
        {0, 0, 0, 0, 0, 0, 4, 7, 6},
        {0, 7, 0, 0, 4, 5, 0, 0, 0},
        {0, 0, 8, 0, 0, 9, 0, 0, 0}};

    int n = 9;
    solve(board, n);
    for (int i = 0; i < 9; i++)
    {
       for (int j = 0; j < 9; j++)
       {
        cout<<board[i][j]<<" ";
       }
       cout<<endl;
    }
    
}