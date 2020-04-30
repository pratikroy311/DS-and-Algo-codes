/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int heightTree(TreeNode* root)
    {
        if(!root)return 0;
        return max(heightTree(root->left),heightTree(root->right))+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        int left_height=heightTree(root->left);
        int right_height=heightTree(root->right);
        
        
        
        int left_dia= diameterOfBinaryTree(root->left);
        int right_dia= diameterOfBinaryTree(root->right);
        
        
        return max( left_height+right_height, max(left_dia,right_dia) );
        
    }
};