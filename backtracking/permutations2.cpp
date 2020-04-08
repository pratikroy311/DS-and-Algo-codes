//https://leetcode.com/problems/permutations-ii/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkduplicate(vector<int> a , int x)
    {
        for(int i=0; i<a.size(); i++)
            if(a[i] == x) return true;
        return false;
    }
    void backtrack(vector<int>& nums,vector<vector<int>>& res, int index)
    {
        if(index==nums.size())
        {
            res.push_back(nums);
        }
        vector<int> temp;

        for(int i= index;i<nums.size();i++)
        {
            if(checkduplicate(temp,nums[i]))
            continue;
            temp.push_back(nums[i]);
            swap(nums[i],nums[index]);
            backtrack(nums,res,index+1);
            swap(nums[i],nums[index]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res{};
        if(!nums.size()) return res;
        sort(nums.begin(),nums.end());
        backtrack(nums,res,0);
        return res;
        
    }
    
};

int main() {
   vector<int> a ={1,1,2};
   Solution obj;
   vector<vector<int>> out = obj.permuteUnique(a);

   for(int i=0;i<out.size();i++)
   {
       for(int j=0;j<out[i].size();j++)
       {
           cout << out[i][j] <<",";
       }
       cout << "\n";
   }
   return 0;
}