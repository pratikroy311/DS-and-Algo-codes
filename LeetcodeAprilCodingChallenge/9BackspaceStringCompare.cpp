#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void removeB(string &s)
    {
        int pos = s.find("#");
        while(pos != -1)
        {
            if(pos ==0)
            {
                s =s.substr(1);
            }
            else
            {
                s =s.erase(pos-1, 2);
            }
            pos = s.find("#");
            
        }
    }
    bool backspaceCompare(string S, string T) {
        if(S == T) return true;
        removeB(S);
        removeB(T);
        cerr << S << "\n" <<T;
        return S == T;

    }
};
int main() {
   #ifndef ONLINE_JUDGE
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/in.txt","r",stdin);
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/out.txt","w",stdout);
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/err.txt","w",stderr);
   #endif
   string s,t;
   cin >> s >> t;
//    Solution obj;
//    cout <<obj.backspaceCompare(s,t);
    cerr << t.erase(1,2);
    
   
   
   return 0;
}