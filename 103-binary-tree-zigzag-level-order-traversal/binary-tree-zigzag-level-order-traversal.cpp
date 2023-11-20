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
        

        vector<vector<int>>v;
        if(root==NULL) return v;

        queue<TreeNode *>q;
        q.push(root);
        
        int level_no=0;
        while(!q.empty()){
            int levelSize=q.size();

            vector<int>k;
            for(int i=0;i<levelSize;i++){

                TreeNode *curr=q.front();
                q.pop();
                k.push_back(curr->val);

                if(curr->left!=nullptr){
                    q.push(curr->left);
                }
                if(curr->right!=nullptr){
                    q.push(curr->right);
                }
            }
            if(level_no%2!=0){
                reverse(k.begin(),k.end());
            }
            level_no++;
            v.push_back(k);
        }
        return v;
    }
};