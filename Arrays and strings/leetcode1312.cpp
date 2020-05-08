#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> dp;
    int helper(string s,int i,int j)
    {
        if(i>=j) return 0;
        if(dp[i][j]!= -1)
            return dp[i][j];
        if(s[i]==s[j])
            return helper(s,i+1,j-1);
        else
        {
            dp[i][j]= 1+ min(helper(s,i+1,j),helper(s,i,j-1));
        }
        
        return dp[i][j];
        
    }
    int minInsertions(string s) {
        int n =s.length();
        dp =vector<vector<int>> (n,vector<int>(n,-1));
        
        
        return helper(s,0,s.length()-1);
    }
};
int main() {
#ifndef ONLINE_JUDGE
freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/in.txt","r",stdin);
freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/out.txt","w",stdout);
freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/err.txt","w",stderr);
#endif
   Solution obj;
   cout << obj.minInsertions("mbadm");
   return 0;
}