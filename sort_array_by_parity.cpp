// Given an integer array nums,
// move all the even integers at the beginning of the array followed by all the odd integers.

// Return any array that satisfies this condition

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
                result.insert(result.begin(), nums[i]);
            else
                result.push_back(nums[i]);
        }
        return result;
    }
};


// 0ms

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                v.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                v.push_back(nums[i]);
            }
        }
        return v;
        
    }
};