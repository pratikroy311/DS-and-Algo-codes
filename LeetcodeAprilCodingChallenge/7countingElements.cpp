#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map<int,int> hash;
        int res=0;
        for(int i=0;i<arr.size();i++)
        {
            
            hash[arr[i]]++;
            
        }
        for(int i=0;i<arr.size();i++)
        {
            if(hash[i]>0 && hash[i+1]>0)
                res += hash[i];
                
        }
        return res;
    }
};
int main() {
   vector<int> a ={1,1,2,3};
   Solution obj;
   cout << obj.countElements(a);

   return 0;
}