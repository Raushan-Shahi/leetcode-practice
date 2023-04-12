// Given a 0-indexed integer array nums, find a 0-indexed integer array answer where:

// answer.length == nums.length.
// answer[i] = |leftSum[i] - rightSum[i]|.
// Where:

// leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
// rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.
// Return the array answer.



#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int n = nums.size();
        int leftsum[n], rightsum[n];
        vector<int> answer;
        leftsum[0]=0;
        rightsum[n]=0;
        for(int i=1; i<n;i++){
            leftsum[i]=0;
            for(int j =0;j<i;j++)
                leftsum[i] +=nums[j];
        }        
        for(int i=0; i<n;i++){
            rightsum[i]=0;
            for(int j=(n-1);j>i;j--)
                rightsum[i] +=nums[j];
        }
        for(int i=0;i<n;i++){
            answer.push_back(abs(leftsum[i]-rightsum[i]));
        }
    return answer;
    }
};




class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> ans;
        vector<int> leftSum;
        vector<int> rightSum;
        int j=nums.size()-1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(i==nums.size()-1){
                rightSum.push_back(0);
            }else{
                sum=0;
                for(int j=i+1;j<nums.size();j++){
                    sum+=nums[j];
                }
                rightSum.push_back(sum);
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(i==0){
                leftSum.push_back(0);
            }else{
                sum=0;
                for(int j=i-1;j>=0;j--){
                    sum+=nums[j];
                }
                leftSum.push_back(sum);
            }
        }
        reverse(leftSum.begin(),leftSum.end());
        for(int i=0;i<nums.size();i++){
            ans.push_back(abs(leftSum[i]-rightSum[i]));
        }
        return ans;
    }
};