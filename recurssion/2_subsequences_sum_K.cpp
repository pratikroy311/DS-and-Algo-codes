#include <bits/stdc++.h>
using namespace std;
void printSubsequenceK(vector<int>& arr,int idx,vector<int>&list,int n,int sum,int k){
    if(sum == k){
        for(auto i:list){
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    if(idx == n){
        return;
    }
    list.push_back(arr[idx]);
    printSubsequenceK(arr,idx+1,list,n,sum+arr[idx],k);
    list.pop_back();
    printSubsequenceK(arr,idx+1,list,n,sum,k);
}
int main(){
    vector<int> arr = {1,2,1};
    vector<int> list{};
    int k =2;
    printSubsequenceK(arr,0,list,3,0,k);
}