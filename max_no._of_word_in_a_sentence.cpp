// A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

// You are given an array of strings sentences, where each sentences[i] represents a single sentence.

// Return the maximum number of words that appear in a single sentence





#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int result=0;
        for (int i = 0; i < sentences.size(); i++)
        {
            int count =1;
            for (int j = 0; j < sentences[i].size(); j++)
            {
                if(sentences[i][j] == ' ')
                    count +=1;
            }
            result = max(result, count);
        }
        return result;     
    }
};




// 0ms solution 
/*
class Solution {
public:
    int solve(string s){
        int i=0,sols=0;
        while(i<s.size())
        {if(s[i]==' ')
        sols++;
            i++;
        }
        return sols+1;
    }
    int mostWordsFound(vector<string>& sentences) {
        int sols=0;
        for(int po=0;po<sentences.size();po++){
            sols=max(sols,solve(sentences[po]));
        }
        return sols;
    }
};
*/

int main(){
    
return 0;
}