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
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxSum(root, maxi);
        return maxi;
    }
    int maxSum(TreeNode* node, int &maxi)
    {
        if(node==NULL)
            return 0;
        int l=maxSum(node->left, maxi);
        int r=maxSum(node->right, maxi);
        int maxm= max(max(l,r)+node->val, node->val);
        maxi=max(maxi,max(maxm,l+r+node->val));
        return maxm;
    }
};