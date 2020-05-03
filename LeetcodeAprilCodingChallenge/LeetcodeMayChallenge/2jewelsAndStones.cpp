//link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3317/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
        for(int i=0;i<S.size();i++)
        {
            for(int j=0;j<J.size();j++)
            {
                if(S[i]==J[j])
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};