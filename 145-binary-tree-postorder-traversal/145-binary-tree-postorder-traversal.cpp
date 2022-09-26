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
    vector<int> postorderTraversal(TreeNode* root) {
            vector<int> ans;
      stack<TreeNode*> stk;
      if(root==NULL)
      return ans;
      TreeNode* temp;
      TreeNode* curr;
      curr=root->left;
      stk.push(root);
      while(!stk.empty())
      {
          if(curr!=NULL)
          {
              stk.push(curr);
              curr=curr->left;
          }
          else
          {
              temp=stk.top()->right;
              if(temp==NULL)
              {
                  temp=stk.top();
                  stk.pop();
                  ans.push_back(temp->val);
                  while(!stk.empty() && temp==stk.top()->right)
                  {
                      temp=stk.top();
                      stk.pop();
                      ans.push_back(temp->val);
                  }
              }
              else
              curr=temp;
          }
      }
      return ans;  
    }
};