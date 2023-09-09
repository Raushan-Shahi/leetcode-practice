#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        int n = tickets.size();
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            q.push(tickets[i]);
        }
        int count = 0, i = 0;
        while (tickets[k] != 0)
        {
            if(tickets[i] ==0){
                i++;
                continue;
            }
        }
        return count;
    }
};
