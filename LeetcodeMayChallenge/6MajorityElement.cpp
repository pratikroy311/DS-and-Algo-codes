#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> s;
        int result = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]) ==s.end())
                s[nums[i]] =1;
            else
                s[nums[i]] +=1;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(s[nums[i]] > nums.size()/2)
                result = nums[i]; 
        }
        return result;
            
    }
};
int main() {
   vector<int> a = {2,1,2};
   Solution obj;
   cout << obj.majorityElement(a);
   return 0;
}