#include <bits/stdc++.h>

using namespace std;
//approach 1: O(n)
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size() == 1)
            return 0;
        if(nums[0]>nums[1] )
            return 0;
        if(nums[nums.size()-1]>nums[nums.size()-2] )
            return nums.size()-1;
        int i,j,k;
        for(int i=1;i<nums.size();i++)
        {
            int j =i -1;int k=i+1;
            if(k <nums.size())
            {
                if(nums[i]>nums[j] && nums[i]>nums[k])
                    return i;
            }
        }
        return -1;
    }
};

// //Approch 2: O(log(n))
// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         if(nums.size() == 1)
//             return 0;
//         int l =0,r =nums.size()-2;
//         while(l<=r)
//         {
//             int mid = l + (r-l) /2;
//             if(nums[mid]<= nums[mid+1])
//             {
//                 l =mid+1;
//             }
//             else
//             {
//                 r =mid-1;
//             }
//         }
//         return l;
//     }
// };

int main() {
   vector<int> a ={1,2,1,3,5,6,4};
   Solution obj;
   cout << obj.findPeakElement(a);
   return 0;
}