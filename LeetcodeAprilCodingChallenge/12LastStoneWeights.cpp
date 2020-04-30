#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(!stones.size())  return 0;
        if(stones.size() == 1) return stones[0];
        int s = stones.size();
        sort(stones.begin(),stones.end(),greater<int>());
        while(stones.size()!=1 && stones.size()!=0)
        {
            sort(stones.begin(),stones.end(),greater<int>());
            if(stones[0]-stones[1]==0)
            {
                stones.erase(stones.begin(),stones.begin()+2);
            }
            else
            {
                int t = stones[0], p =stones[1];
                stones.erase(stones.begin(),stones.begin()+2);
                stones.push_back(t-p);
            }
            
        }
        if(!stones.size()) return 0;
        return stones[0];
        
        
    }
};
int main() {
   
   vector<int> a={2,2};

   Solution obj;
   cout <<obj.lastStoneWeight(a);
   return 0;
}