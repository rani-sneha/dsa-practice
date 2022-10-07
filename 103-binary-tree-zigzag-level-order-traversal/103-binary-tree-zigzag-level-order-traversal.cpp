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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
                vector<vector<int>> ans;
        queue <TreeNode*> q;
        if(root==NULL)
            return ans;
        q.push(root);
        int n=1;
        while(!q.empty())
        {
            int size=q.size();
            deque <int> lvl;
            for(int i=0; i<size; i++)
            {
                TreeNode* node;
                node=q.front();
                q.pop();
                if(node->left!=NULL)
                    q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
                if(n%2!=0)
                    lvl.push_back(node->val);
                else if(n%2==0)
                    lvl.push_front(node->val);  
            }
            vector <int> v1;
            for(int i=0; i<size; i++){
                v1.push_back(lvl.front());
            lvl.pop_front();
            }
                                  ans.push_back(v1); 
            n++;                                               
        } 
        return ans;
    }
};