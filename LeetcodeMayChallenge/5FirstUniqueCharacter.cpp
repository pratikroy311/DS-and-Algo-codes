//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3320/

class Solution {
public:
    int firstUniqChar(string s) {
        // we will store frequency of each character
       int count[26]={0}; 
       for(int i=0;i<s.length();i++)
       {
           count[s[i]-'a']++;
       }

       //this will check freq of each character from index 0
       //so when we get 1st char freq == 1 we will return its index
       for(int i=0;i<s.length();i++)
       {
           if(count[s[i]-'a']==1)
               return i;
       }
        return -1;
    }
};