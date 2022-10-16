// Missing Number
/*
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
Input: nums = [3,0,1]
Output: 2
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = nums.size();
        for(int i=0; i<nums.size(); ++i)
            res ^= i ^ nums[i];
        return res;    
    }
};
