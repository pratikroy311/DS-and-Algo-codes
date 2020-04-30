//https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/531/week-4/3310/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lp =nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(i+nums[i]>=lp)
                lp =i;
            
        }
        return lp==0;
    }
};