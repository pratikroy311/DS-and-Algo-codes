//https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/532/week-5/3314/

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
    int max_path_sum;
    int pathsum(TreeNode* node ,int &max_path_sum)
    {
        if(!node) return 0;
        int left = pathsum(node->left , max_path_sum),right = pathsum(node->right,max_path_sum);
        
        max_path_sum = max(max_path_sum,left+right+node->val);
        return max(0, node->val + max(left, right));
    }
    int maxPathSum(TreeNode* root) {
        max_path_sum = INT_MIN;
        pathsum(root , max_path_sum);
        return max_path_sum;
    }
};