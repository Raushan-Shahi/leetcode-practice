#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

class RecentCounter
{
private:
    queue<int> q;

public:
    RecentCounter()
    {
    }

    int ping(int t)
    {
        q.push(t);
        while (t - 3000 > q.front())
        {
            q.pop();
        }
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */