//leetcode problem name : Create Target Array
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            res.push_back(INT_MAX);
        }
        for(int j=0;j<nums.size();j++)
        {
            if(res[index[j]]==INT_MAX)
                res[index[j]] = nums[j];
            else
            {
                for(int k=nums.size()-1;k>index[j];k--)
                {
                    res[k]=res[k-1];
                }
                res[index[j]]=nums[j];
            }
            
        }

        return res;
    }
};
int main() {
   #ifndef ONLINE_JUDGE
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/in.txt","r",stdin);
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/out.txt","w",stdout);
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/err.txt","w",stderr);
   #endif
   vector<int> nums; vector<int> index;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int x;
       cin >> x;
       nums.push_back(x);
   }
   for(int j=0;j<n;j++)
   {
       int x;
       cin >> x;
       index.push_back(x);
   }
   Solution obj;
   vector<int> res=obj.createTargetArray(nums,index);
   for(int k=0;k<n;k++)
   {
       cout << res[k] << " ";
   }
   return 0;
}