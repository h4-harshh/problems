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
        

        vector<vector<int>>res;
        if(root==NULL) return res;

        stack<TreeNode *>st1;
        stack<TreeNode *>st2;

        st1.push(root);

        while(!st1.empty() || !st2.empty()){
            
            vector<int>v;
            while(!st1.empty())
            {
                TreeNode *curr=st1.top();
                st1.pop();
                v.push_back(curr->val);
                if(curr->left){
                     st2.push(curr->left);
                }
                if(curr->right){                    
                    st2.push(curr->right);
                }
            }
            if (!v.empty()) {
                res.push_back(v);
                v.clear();
            }

            while(!st2.empty())
            {
                TreeNode *curr=st2.top();
                st2.pop();
                v.push_back(curr->val);
                if(curr->right){
                     st1.push(curr->right);
                }
                if(curr->left)
                {
                     st1.push(curr->left);
                }
            }
           if (!v.empty()) {
                res.push_back(v);
                v.clear();
            }
        }

        return res;
    }
};