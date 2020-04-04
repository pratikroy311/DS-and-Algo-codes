#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=nums[0], sum=nums[0];
        for(int i=1; i<nums.size(); i++) {
            sum = max(nums[i], sum+nums[i]);
            if(sum>max_sum) {
                max_sum=sum;
            }
        }
        
        return max_sum;
    }
};

int main() {
   vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
    Solution obj;
    obj.maxSubArray(a);
   return 0;
}