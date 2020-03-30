#include <bits/stdc++.h>

using namespace std;
void helper(string s,string curr,int index)
{
    if(index == s.length())
    {
        cout << curr << " ";
        return;
    }
    helper(s,curr,index+1);
    helper(s,curr + s[index],index+1);
}
void subset(string s)
{
    helper(s,"",0);
}

int main() {
   string s="abc";
   subset(s);
   return 0;
}