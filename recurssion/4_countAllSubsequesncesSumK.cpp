#include <bits/stdc++.h>
using namespace std;
int printSubsequenceK(vector<int>& arr,int idx,int n,int sum,int k){
    if(sum == k){
        return 1;
    }
    if(idx == n){
        return 0;
    }
    int left=printSubsequenceK(arr,idx+1,n,sum+arr[idx],k);
    int right=printSubsequenceK(arr,idx+1,n,sum,k);
    return left+right;
}
int main(){
    vector<int> arr = {1,2,1};
    int k =2;
    cout << printSubsequenceK(arr,0,3,0,k);
}