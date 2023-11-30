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

    bool traverse(TreeNode *root1,TreeNode *root2)
    {
        if(root1==nullptr && root2==nullptr) return true;
        if( (root1==nullptr || root2==nullptr)) 
        {
            return false;
        }
        if(root1->val!=root2->val)
        {
            return false;
        }
        bool lt=traverse(root1->left,root2->right);
        bool rt=traverse(root1->right,root2->left);

        return (lt && rt);
        
    }

    bool isSymmetric(TreeNode* root) {

        bool lt=traverse(root->left,root->right);

        return (lt);
        
    }
};