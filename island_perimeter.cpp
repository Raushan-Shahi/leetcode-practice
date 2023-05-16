#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    if ((i == 0) && (j == 0))
                        count += 4;

                    else if ((i == 0) && (j != 0))
                        count += (4 - (2 * grid[i][j - 1]));

                    else if ((i != 0) && (j == 0))
                        count += (4 - (2 * grid[i - 1][j]));

                    else
                        count += (4 - (2 * grid[i - 1][j]) - (2 * grid[i][j - 1]));
                }
            }
        }
        return count;
    }
};

// least time complexity
class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        int row = grid.size();
        int col = grid[0].size();
        int ans = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (grid[i][j] == 1)
                {
                    ans += 4;
                    if (i + 1 < row && grid[i + 1][j] == 1)
                        ans--;
                    if (i - 1 >= 0 && grid[i - 1][j] == 1)
                        ans--;
                    if (j + 1 < col && grid[i][j + 1] == 1)
                        ans--;
                    if (j - 1 >= 0 && grid[i][j - 1] == 1)
                        ans--;
                }
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}