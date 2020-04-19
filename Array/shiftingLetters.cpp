#include <bits/stdc++.h>
class Solution {
public:
    string shiftingLetters(string S, vector<int>& shifts) {
        
        string result="";
        int x=0;
        for(int sh:shifts)
        {
            x = (x+sh)%26;
        }
        for(int i=0;i<S.lenght();i++)
        {
            int index = S[i] -'a';
            result.append((char)((index+x)% 26 +97));
            x = 
        }

    }
};
int main() {
   #ifndef ONLINE_JUDGE
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/in.txt","r",stdin);
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/out.txt","w",stdout);
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/err.txt","w",stderr);
   #endif

   string s; 
   vector<int> a;
   cin >>s;
   
   for(int i=0;i<s.length();i++)
   {
      int n;cin >> n;
      a.push_back(n);
   }
   Solution obj;
   s =obj.shiftingLetters(s,a);
   cout <<s;
   return 0;
}