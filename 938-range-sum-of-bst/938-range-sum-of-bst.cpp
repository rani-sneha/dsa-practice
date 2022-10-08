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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        helper(root, low, high, sum);
        return sum;
    }
    void helper(TreeNode* root, int low, int high, int &sum)
    {
        if(root==NULL)
            return ;
        helper(root->left, low, high, sum);
        int lh=root->val;
        if(lh>=low && lh<=high)
            sum+=lh;
        helper(root->right, low, high, sum);

    }
};