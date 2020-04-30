//https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/531/week-4/3308/

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int i = 0;
        
        while (m != n)
        {
            m = m >> 1;
            n = n >> 1;
            i++;
        }
        
        return m << i;
    }
};