#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    
        int pos = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[pos++],nums[i]);
            }
        }


        for(int i=0;i<nums.size();i++)
        {
            cout << nums[i] << " ";
        }

    }
};

int main() {
   vector<int> a ={0,1,0,3,12};
   Solution obj;
   obj.moveZeroes(a);
   return 0;
}