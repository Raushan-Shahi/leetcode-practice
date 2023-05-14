// You are given an array of n strings strs, all of the same length.

// The strings can be arranged such that there is one on each line, making a grid.

// For example, strs = ["abc", "bce", "cae"] can be arranged as follows:
// abc
// bce
// cae
// You want to delete the columns that are not sorted lexicographically. In the above example (0-indexed),
//  columns 0 ('a', 'b', 'c') and 2 ('c', 'e', 'e') are sorted, while column 1 ('b', 'c', 'a') is not, so you would delete column 1.

// Return the number of columns that you will delete.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minDeletionSize(vector<string> &strs)
    {
        int count = 0;
        for (int j = 0; j < strs[0].size(); j++)
        {
            char max = strs[0][j];
            for (int i = 1; i < strs.size(); i++)
            {
                if (strs[i][j] >= max)
                    max = strs[i][j];
                else
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};



// 0ms code 
class Solution {
public:
    Solution()
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }

    int minDeletionSize(vector<string>& strs)
    {
        if (strs.size() == 1)
        {
            return 0;
        }
        std::vector<bool> toDelete(strs[0].size(), false);
        for (int r = 1; r < strs.size(); ++r)
        {
            auto const& curr = strs[r];
            auto const& last = strs[r-1];
            for (int c = 0; c < strs[0].size(); ++c)
            {
                if (toDelete[c])
                {
                    continue;
                }
                if (curr[c] < last[c])
                {
                    toDelete[c] = true;
                }
            }
        }
        return std::accumulate(toDelete.begin(), toDelete.end(), 0);
    }
};
int main()
{

    return 0;
}