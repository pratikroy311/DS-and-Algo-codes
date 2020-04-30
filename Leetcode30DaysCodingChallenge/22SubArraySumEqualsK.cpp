//https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/531/week-4/3307/


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp; 
        int sum = 0, ans = 0; 
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
			if(sum == k) ans++;
            if(mp[sum-k])
                ans += mp[sum-k];
            mp[sum]++;
        }
        return ans;
    }
};