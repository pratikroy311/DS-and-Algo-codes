#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string rotateleft(string &s, int d)
    {
        reverse(s.begin(),s.begin()+d);
        reverse(s.begin()+d,s.end());
        reverse(s.begin(),s.end());
        return s;
    }
    string stringShift(string s, vector<vector<int>>& shift) {
        int left=0,right=0;
        for(auto x: shift)
        {
            if(x[0]==0)
            {
                left+= x[1];
            }
            else if(x[0]== 1)
            {
                right += x[1];
            }
        }
        
        int r = (left % s.length()) - (right % s.length());
        if(r > 0)
        {
            s =rotateleft(s,r);
        }
        else
        {
            s =rotateleft(s,s.length()-(-r));
        }
        return s;
        
    }
};
int main() {
   #ifndef ONLINE_JUDGE
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/in.txt","r",stdin);
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/out.txt","w",stdout);
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/err.txt","w",stderr);
   #endif
   string a ="yisxjwry";
   vector<vector<int>> s = {{1,8},{1,4},{1,3},{1,6},{0,6},{1,4},{0,2},{0,1}};
   
   Solution obj;
   a =obj.stringShift(a,s);

   cout << a;
   return 0;
}