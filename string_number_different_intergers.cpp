#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numDifferentIntegers(string words) {
        unordered_set<int>s;
        long long int x=0;
        int flag=0;
        for(int i=0;i<words.length();i++)
        {
            if(words[i]>='0' && words[i] <='9')
            {
                x=x*10+(words[i]-'0');
                x%=1000000007;
                flag=1;

            }
            else
            {
                if(flag==1)
                    s.insert(x);

                flag=0;
                x=0;
            }
        }
        if(flag==1)s.insert(x);
               
        return s.size();
    }
};