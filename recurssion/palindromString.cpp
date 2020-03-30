#include <bits/stdc++.h>

using namespace std;

bool helper(string s,int start,int end)
{
    if(start >= end )
    return true;
    if(s[start]!=s[end])
        return false;
    return helper(s,start+1,end-1);
}
bool isPalindrome(string s)
{
    bool t= helper(s,0,s.length()-1);
    return t;
}
int main() {
   string a = "aabbbaa";

   cout << isPalindrome(a);
   return 0;
}