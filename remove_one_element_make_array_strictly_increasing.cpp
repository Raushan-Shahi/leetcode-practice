// Given a 0-indexed integer array nums, return true if it can be made strictly increasing after removing exactly one element, 
// or false otherwise. If the array is already strictly increasing, return true.

// The array nums is strictly increasing if nums[i - 1] < nums[i] for each index (1 <= i < nums.length).



#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    


class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {

        // check for singular or zero discountinuity from both sides of given array 
        int ct1=0,ct2=0;
        int maxi = nums[0];
        int mini = nums[nums.size()-1];
        //check from front
        for(int i=1;i<nums.size();i++){
            if(maxi>=nums[i]) ct1++;
            maxi = max(maxi,nums[i]); 
        }
        //check from back
        for(int i=nums.size()-2;i>=0;i--){
            if(mini<=nums[i]) ct2++;
            mini = min(mini,nums[i]); 
        }
        //if any side traversal have only one or zero discontinuity then return true 
        //because after removing singular discontinuity array can be made strictly      increasing
        if(ct1==1||ct1==0||ct2==1||ct2==0) return true;

        return false;
    }
};


int main(){
    
return 0;
}
