#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int squareddigit(int n)
    {
        int sum=0;
        while(n!=0)
        {
            int rem = n%10;
            sum += (rem*rem);
            n= n/10;
        }
        return sum;
    }
        
    
    bool isHappy(int num) {
        
        while(num/10>0)
        {
            int sum= 0;
            sum = squareddigit(num);
            num = sum;
        }
        if(num==1 || num==7)
            return true;
        else
        {
            return false;
        }
        

        
    }
};
int main() {
   int n = 19;
   Solution obj;
   cout << obj.isHappy(n);
   return 0;
}