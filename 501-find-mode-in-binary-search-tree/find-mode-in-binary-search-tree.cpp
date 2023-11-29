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

     unordered_map<int,int>mp;

    void traverse(TreeNode *root)
    {
            
        if(root!=nullptr){

            mp[root->val]++;
            traverse(root->left);
            traverse(root->right);
        }
    }

    vector<int> findMode(TreeNode* root) {
        
        vector<int>v;

        if(root==NULL) return v;

       traverse(root);

        int result=INT_MIN;

        for(auto x:mp)
        {
            result=max(result,x.second);
        }

        for(auto x:mp)
        {
            if(x.second==result)
            {
                v.push_back(x.first);
            }
        }

        return v;
    }
};