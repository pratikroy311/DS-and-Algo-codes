//Link for the problem : 
//https://leetcode.com/explore/featured/card/recursion-i/250/principle-of-recursion/1440/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        helper(s,0);
    }
    
    void helper(vector<char>& s,int i)
    {
        if(i >=s.size()) return;
        char ch = s[i];
        helper(s,i+1);
        s[s.size()-i-1] = ch;
    }
};

int main() {
   vector<char> s = {'H','E','L','L','O'};
   Solution obj;
   obj.reverseString(s);
   for(int i=0;i<s.size();i++)
   {
       cout << s[i]<<" ";
   }
   return 0;
}