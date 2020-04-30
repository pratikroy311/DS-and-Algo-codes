//https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/530/week-3/3304/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                return i;
        }
        return -1;
    }
};