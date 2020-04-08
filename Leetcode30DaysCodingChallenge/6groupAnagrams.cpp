#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(string a: strs)
        {
            string t =a;
            sort(t.begin(),t.end());
            m[t].push_back(a);
        }
        vector<vector<string>> res;
        for(auto x: m)
        {
            res.push_back(x.second);
        }
        return res;
    }
};
int main() {
   vector<string> s={"eat", "tea", "tan", "ate", "nat", "bat"};
   Solution obj;
   vector<vector<string>> res=obj.groupAnagrams(s);
   for(int i=0;i<res.size();i++)
   {
       for(string a: res[i])
       {
           cout << a << " ";
       }
       cout << "\n";
   }
   return 0;
}