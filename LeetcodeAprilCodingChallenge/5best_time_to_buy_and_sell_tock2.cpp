//https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3287/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int res =0;
       for(int i=1;i<prices.size();i++)
       {
           if(prices[i]> prices[i-1])
           {
               res += prices[i]-prices[i-1];
           }
       } 
       return res;
    }
};
int main() {
   vector<int> a = {7,1,5,3,6,4};
   vector<int> b = {1,2,3,4,5};
   vector<int> c = {7,6,4,3,1};

   Solution obj;
   cout << obj.maxProfit(a) << "\n";
   cout << obj.maxProfit(b) << "\n";
   cout << obj.maxProfit(c) << "\n";

   return 0;
}