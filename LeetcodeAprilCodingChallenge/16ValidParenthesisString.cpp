#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
        if(!s.length()) return true;
        stack<char> st,ab;
        for(char c: s)
        {
            if(c=='(')
                st.push(c);
            else if(c=='*')
                ab.push(c);
            else
            {
                if(!st.empty()) st.pop();
                else if(!ab.empty()) ab.pop();
                else return false;
            }            
        }

        while(!st.empty() && !ab.empty())
        {
            if(st.top() > ab.top()) return false;
            st.pop();ab.pop();
        }
        return (st.empty());
        
    }
};
int main() {
   string a ="(())((())()()(*)(*()(())())())()()((()())((()))(*";
   Solution obj;
   cout << obj.checkValidString(a);
    
   return 0;
}