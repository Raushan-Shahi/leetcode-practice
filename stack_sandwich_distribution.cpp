#include <iostream>
#include <bits/stdc++.h>
#include <stack>

using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
       int count = 0, i = 0;

        queue<int> q;
        for(auto s : students)
            q.push(s);
        

        // count is identify end condition
        while(count < q.size() && i < sandwiches.size()){
            if(sandwiches[i] == q.front()){
                q.pop();
                i++;
                count = 0;
            }
            else{
                q.push(q.front());
                q.pop();
                count++;
            }
        }
        return q.size();
    }
};