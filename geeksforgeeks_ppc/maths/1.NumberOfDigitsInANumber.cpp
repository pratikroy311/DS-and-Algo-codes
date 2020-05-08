#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //method 1 : time complexity o(no of digits)
    int TotalDigits(int n)
    {
        int res=0;
        while(n!=0)
        {
            res++;
            n = n/10;
        }
        return res;
    }
    //method2 : time complexity o(1)
    int NumOfDigits(int n)
    {
        return log10(n) + 1;
    }
};
int main() {
   #ifndef ONLINE_JUDGE
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/in.txt","r",stdin);
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/out.txt","w",stdout);
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/err.txt","w",stderr);
   #endif

   int N; 
   cin >> N;
   Solution obj;
   int result = obj.TotalDigits(N);
   int res = obj.NumOfDigits(N);
    cout << "method 1 : " << result;
   cout << "\nmethod 2 : "<<res;
   return 0;
}