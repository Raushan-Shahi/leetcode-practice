#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string, int> &a, pair<string, int> &b)
{
    if (a.second == b.second)
        a.first < b.first;
    return a.second > b.second;
}


class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        vector<pair<string, int>> v ;

        for (int i = 0; i < names.size(); i++)
            v.push_back({names[i], heights[i]});
        sort(v.begin(), v.end(), compare);
        vector<string> ans;
        for (int i = 0; i < heights.size(); i++)
            ans.push_back(v[i].first);

        return ans;
    }
};