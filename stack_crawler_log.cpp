#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<string> &logs)
    {
        stack<int> st;
        int n = logs.size();
        for (int i = 0; i < n; i++)
        {
            if (logs[i] == "./")
            {
                continue;
            }

            else if (logs[i] == "../" && st.empty() == false)
            {
                st.pop();
            }

            else if (logs[i] == "../" && st.empty() == true)
            {
                continue;
            }

            else
            {
                st.push(1);
            }
        }

        return st.size();
    }
};