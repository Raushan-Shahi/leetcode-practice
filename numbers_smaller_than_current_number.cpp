// Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. 
// That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

// Return the answer in an array.



#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            int count =0;
            for (int j = 0; j < nums.size(); j++)
            {
                if((j != i) &&( nums[j] < nums[i]))
                    count +=1;
            }
            result.push_back(count);
            
        }
        return result;
        
    }
};



int main(){
    
return 0;
}