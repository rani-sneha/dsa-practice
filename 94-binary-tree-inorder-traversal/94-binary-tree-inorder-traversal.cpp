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
    vector<int> inorderTraversal(TreeNode* root) {
       stack <TreeNode*> stc ;
     vector <int> v ;
     while (root || !stc.empty())
     {
        if (root)
        {
            stc.push(root) ;
            root = root->left;
        }
        else
        {
            root = stc.top() ; stc.pop() ; 
            v.push_back(root->val) ;
            root = root -> right ;
        }       
     }
        return v;
    }
};