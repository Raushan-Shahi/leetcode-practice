#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;


class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int max_wealth =0;
        for (int i = 0; i < accounts.size(); i++)
        {
        int wealth_count =0;
            for (int j = 0; j < accounts[i].size(); j++)
                wealth_count += accounts[i][j];
        max_wealth = max(wealth_count,max_wealth);
        }
        return max_wealth;
    }
};


//runtime 0ms solution 
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        vector<int> customers;
        if(accounts.size() == 0){
            return 0;
        }else{
            for(int i = 0; i < accounts.size(); i++){
                int sum = 0;
                if(accounts[i].size() == 0){
                    continue;
                }else{
                    for(int j = 0; j < accounts[i].size(); j++){
                        sum += accounts[i][j];
                        customers.push_back(sum);
                    }
                }
            }
            for(int i = 0; i < customers.size(); i++){
                if(maxWealth <= customers[i]){
                    maxWealth = customers[i];
                }
            }
        }
        return maxWealth;
    }
};