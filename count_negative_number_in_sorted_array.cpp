// Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, 
// return the number of negative numbers in grid.


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if(grid[i][j] < 0)
                    count++;
            }
            
        }
        return count;
    }
};


int main(){
    
return 0;
}