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
    bool isBalanced(TreeNode* root) {
      int ans=helper(root, 0, 0);
        if(ans==-1)
            return false;
        else
            return true;
        
    }
    int helper(TreeNode* root, int lh, int rh)
    {
       if(root ==NULL )
            return 0;
        if(lh==-1 || rh==-1)
            return -1;
        lh=helper(root->left, lh, rh);
            if(lh==-1 )
            return -1;
        rh=helper(root->right, lh, rh);
        if(abs(lh-rh)>1)
            return -1;
                if(lh==-1 || rh==-1)
            return -1;
        return 1 +max(rh, lh);  
    }
};