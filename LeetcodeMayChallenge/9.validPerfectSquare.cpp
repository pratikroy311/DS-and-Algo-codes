//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/

class Solution {
public:
    // bool isPerfectSquare(int num) {
    //     long long i =1;
    //     long long j=1;
    //     while(j<num)
    //     {
    //         i++;
    //         j = i*i;
    //     }
    //     if(j == num)
    //         return true;
    //     else
    //         return false;
    // }
    //approach 2 : binary search
    bool isPerfectSquare(int num) {
        long long l= 0, r= num;
        
        while(l<=r)
        {
            long mid = l + (r-l)/2;
            if (mid*mid == num)
                return true;
            else if(mid*mid<num)
            {
                l = mid+1;
            }
            else
                r = mid-1;
        }
        return false;
    }
};