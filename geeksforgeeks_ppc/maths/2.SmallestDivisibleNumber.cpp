#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long smallestDivisible(int n)
    {
        long long ans = 1;
        for(long long i =1;i<=n;i++)
        {
            
            ans = (ans*i)/(__gcd(ans,i));
        }
        return ans;
    }
}; 

int main() {
#ifndef ONLINE_JUDGE
freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/in.txt","r",stdin);
freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/out.txt","w",stdout);
freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/err.txt","w",stderr);
#endif
   Solution obj;
   int N;
   cin >> N;
   for(int i=0;i<N;i++)
   {
       long long n;
       cin >> n;
       cout << obj.smallestDivisible(n) << "\n";
       
   }
   return 0;
}