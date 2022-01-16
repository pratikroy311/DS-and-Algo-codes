#include <bits/stdc++.h>
using namespace std;
bool printSubsequenceK(vector<int>& arr,int idx,vector<int>&list,int n,int sum,int k){
    if(sum == k){
        for(auto i:list)
            cout << i << " ";
        return true;
    }
    if(idx == n){
        return false;
    }
    list.push_back(arr[idx]);
    if(printSubsequenceK(arr,idx+1,list,n,sum+arr[idx],k)==true) return true;
    list.pop_back();
    if(printSubsequenceK(arr,idx+1,list,n,sum,k)==true)return true;
    return false;
}
int main(){
    vector<int> arr = {1,2,1};
    vector<int> list{};
    int k =2;
    printSubsequenceK(arr,0,list,3,0,k);
}