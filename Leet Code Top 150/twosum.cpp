#include<bits/stdc++.h>
//Problem Link : https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            int temp = target - nums[i];
            vector<int>::iterator it = find(nums.begin(),nums.end(),temp);
            if(it != nums.end() && it - nums.begin() != i){
                result.push_back(i);
                result.push_back(it-nums.begin());
                break;
            }
        }
        return result;
    }
};
