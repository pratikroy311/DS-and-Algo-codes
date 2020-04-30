//https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/532/week-5/3315/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool dfs(TreeNode* node , vector<int>& arr,int count)
    {
        if(node->val != arr[count]) return false;
        if(count == arr.size()-1)
            return (!node->left) && (!node->right);
        if(node->left && dfs(node->left,arr,count+1))
            return true;
        if(node->right && dfs(node->right,arr,count+1))
            return true;
        return false;
    }
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        return dfs(root,arr,0);
    }
};