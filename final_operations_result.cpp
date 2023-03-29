// There is a programming language with only four operations and one variable X:

// ++X and X++ increments the value of the variable X by 1.
// --X and X-- decrements the value of the variable X by 1.
// Initially, the value of X is 0.

// Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(auto s:operations){
            if(s[1]=='+') 
                x+=1;
            else 
                x-=1; 
        }
        return x;
    }
};


// run time 0ms
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int l=0;
        for(int i=0;i<operations.size();i++){
            for(int j=0;j<operations[i].length();j++){
                if(operations[i][j]=='+')
                {l++;
               break; }
                if(operations[i][j]=='-')
                {l--;
               break; }

            }

        }
        return l;
    }
};