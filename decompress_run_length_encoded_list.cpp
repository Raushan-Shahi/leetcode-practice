// We are given a list nums of integers representing a list compressed with run-length encoding.

// Consider each adjacent pair of elements [freq, val] = [nums[2*i], nums[2*i+1]] (with i >= 0).  
// For each such pair, there are freq elements with value val concatenated in a sublist. 
// Concatenate all the sublists from left to right to generate the decompressed list.

// Return the decompressed list.



#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); (i+=2))
        {
            int j =0;
            while(j < nums[i])
                result.push_back(nums[i+1]);
        }
        return result;
    }
};


int main(){
    
return 0;
}


// 0ms solution 
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i+=2){
            while(nums[i]>0){
                ans.push_back(nums[i+1]);
                nums[i]--;
            }
        }
        return ans;
    }
};
