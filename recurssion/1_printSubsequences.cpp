#include <bits/stdc++.h>
using namespace std;
void printSubsequence(vector<int>& arr,int idx,vector<int>&list,int n){
    if(idx == n){
        for(auto i:list){
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    list.push_back(arr[idx]);
    printSubsequence(arr,idx+1,list,n);
    list.pop_back();
    printSubsequence(arr,idx+1,list,n);
}
int main(){
    vector<int> arr = {3,1,2};
    vector<int> list{};
    printSubsequence(arr,0,list,3);
}