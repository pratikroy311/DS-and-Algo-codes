//problem link : https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string generateTheString(int n) {
        string res="";
        if(n%2==0)
        {
            for(int i=0;i<n-1;i++)
                res+='p';
            res+='z';
        }
        else
            for(int i=0;i<n;i++)
                res+='t';
        return res;
    }
};
int main() {
   int x =4;
   Solution obj;
   cout << obj.generateTheString(x);
   return 0;
}
