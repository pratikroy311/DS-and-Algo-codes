//link: https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/528/week-1/3283/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> h;int res;
        for(int key: nums)
        {
            if(h.count(key)==1)
                h.erase(key);
            else
                h.insert(key);
        }
        for(int key: nums)
        {
            if(h.count(key)>0)
                res= key;
        }
        return res;
    }
};