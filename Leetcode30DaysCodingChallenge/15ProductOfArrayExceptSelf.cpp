//https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/530/week-3/3300/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l = nums.size();
        vector<int> ans;int answer[l];
        answer[0]=1;
        for(int i=1;i<nums.size();i++)//right
        {
            answer[i]= nums[i-1] * answer[i-1]; 
        }
        int r=1;
        for(int i=l-1;i>=0;i--)
        {
            answer[i] = answer[i]*r;
            r *= nums[i];
        }
        for(int i=0;i<l;i++)
        {
            ans.push_back(answer[i]);
        }
        return ans;
    }
};