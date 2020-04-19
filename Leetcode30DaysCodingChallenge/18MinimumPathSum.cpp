#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(!grid.size()) return 0;
        int s =grid.size() ,t= grid[0].size();
        vector<vector<int>> dp(s,vector<int> (t));
        
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<t;j++)
            {
                dp[i][j] += grid[i][j];
                if(i>0 && j>0)
                {
                    dp[i][j] += min(dp[i-1][j],dp[i][j-1]);
                }
                else if(i>0)
                {
                    dp[i][j] += dp[i-1][j];
                }
                else if(j>0)
                {
                    dp[i][j] += dp[i][j-1];
                }
                    
            }
        }
        
        return dp[s-1][t-1];
    }
};
int main() {
   vector<vector<int>> g ={{1,3,1},{1,5,1},{4,2,1}};
   Solution obj;
   int out =obj.minPathSum(g);
   cout << out ;
   return 0;
}