//link : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        //store frequency of each char of magazine
        unordered_map<char,int> freq;  
        for(char c: magazine)
        {
            if(freq.find(c)!=freq.end())
            {
                freq[c] +=1;
            }
            else
            {
                freq[c] = 1;
            }
            
        }
        //now if char c in ransomNote exits in map and count of char c not
        //less than or eual to 0 return true
        for(char c: ransomNote) //this loop will check if c exists or not in map
        {
            //if doen't exists or frequency is <=0 return false
            if(freq.find(c)== freq.end() || freq[c] <=0) 
                return false;
            
            //if true decrease frequency of character 
            freq[c] -=1;
        }
        //if loop exists that means we can construct ransomeNote
        return true;
    }
};
int main() {
   Solution obj;
   cout << obj.canConstruct("bg","efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj");
   return 0;
}