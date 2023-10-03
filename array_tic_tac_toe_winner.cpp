#include <iostream>
#include <bits/stdc++.h>
using namespace std;



class Solution
{
    
bool win(vector<vector<int>> &board, int key)
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == key && board[i][1] == key && board[i][2] == key)
            return true;
        else if (board[0][i] == key && board[1][i] == key && board[2][i] == key )
            return true;
    }

    if (board[0][0] == key && board[1][1] == key && board[2][2] == key )
        return true;
    else if (board[0][2] == key && board[1][1] == key && board[2][0] == key)
        return true;

    return false;
};

public:
    string tictactoe(vector<vector<int>> &moves)
    {
        string ans;
        vector<vector<int>> board = {{2,2,2},{2,2,2},{2,2,2}};
        for (int i = 0; i < moves.size(); i++)
        {
            if (i % 2 == 0)
            {
                board[moves[i][0]][moves[i][1]] = 1;
                if (win(board, 1))
                {
                    ans = "A";
                    return ans;
                }
            }
            else
            {
                board[moves[i][0]][moves[i][1]] = 0;
                if (win(board, 0))
                {
                    ans = "B";
                    return ans;
                }
            }
        }
        if(moves.size()==9)
            ans = "Draw";
        else
            ans = "Pending";
        return ans;
    }
};