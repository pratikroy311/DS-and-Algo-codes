#include <bits/stdc++.h>

using namespace std;

void winner(string s)
{
    stack<char> h;int count =0;
    for(int i=0;i<s.length();i++)
    {
        if(h.empty() || h.top() != s[i] )
        {
            h.push(s[i]);

        }
        else
        {
            h.pop();
            count++;
        }               
    }
    if(count%2==0)
    {
        cout << "winner is : B\n" ;
    }
    else
    {
        cout << "winner is : A\n";
    }
    
}

int main() {
   string s ="kaak";
   winner(s);
   return 0;
}