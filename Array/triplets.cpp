#include <bits/stdc++.h>
using namespace std;

int countTriplets(vector<int> &nums,int n)
{
    if(n<3) return 0;
    int count=0;
    int i = 0;
    while(i < nums.size() - 2 && nums[i] >= nums[i + 1]) i++;
    
    return count;
}

int main() {
   #ifndef ONLINE_JUDGE
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/in.txt","r",stdin);
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/out.txt","w",stdout);
   freopen("/home/ghost/Documents/code/coding/DS-and-Algo-codes/err.txt","w",stderr);
   #endif
   int n;vector<int> arr;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
       int t;
       cin >> t;
       arr.push_back(t);
   }

   cout << countTriplets(arr,n);
   
   return 0;
}