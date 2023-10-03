#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int count=0, max_count=0, flag =0;
        int n = nums.size();
        for(int i=0;i<n; i++){
            if(flag ==0 && nums[i]<= threshold && (nums[i] % 2)==0 ){
                flag =1;
                count =1;
                max_count= max(max_count, count);
            }
            else if(flag == 1 && ((nums[i]%2) != (nums[i-1]%2)) && nums[i] <= threshold){
                count +=1;
                max_count= max(max_count, count);
            }
            else if(flag ==1 && ((nums[i]%2) == (nums[i-1]%2)) && nums[i] <= threshold && nums[i] %2 ==0) {
                flag =1;
                count =1;
                max_count= max(max_count, count);
            }
            else{
                flag =0;
                count =0;
            }
        }
        return max_count;
    }
};