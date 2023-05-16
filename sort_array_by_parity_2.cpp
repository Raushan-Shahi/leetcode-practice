// Given an array of integers nums, half of the integers in nums are odd, and the other half are even.

// Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.

// Return any answer array that satisfies this condition.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i += 2)
        {
            if (nums[i] % 2 != 0)
            {
                for (int j = 1; j < nums.size(); j += 2)
                {
                    if (nums[j] % 2 == 0)
                        swap(nums[i], nums[j]);
                }
            }
        }
        return nums;
    }
};


// 7ms solution 
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=1;
        while(i<n && j<n){
            if(nums[i]%2==0)
                i=i+2;
            else if(nums[j]%2==1)
                j=j+2;
            else
                swap(nums[i],nums[j]);
        }
        return nums;
    }
};


int main()
{

    return 0;
}