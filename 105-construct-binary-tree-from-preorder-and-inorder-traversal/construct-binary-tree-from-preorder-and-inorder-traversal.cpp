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
    int pre_index=0;
    TreeNode *constructTree(vector<int>&preorder,vector<int>&inorder,int is,int ie){
        
        if(is > ie) return nullptr;
        TreeNode *curr_root=new TreeNode(preorder[pre_index++]);

        int index;
        for(int i=is;i<=ie;i++){
            if(inorder[i]==curr_root->val){
                index=i;
                break;
            }
        }

        curr_root->left=constructTree(preorder,inorder,is,index-1);
        curr_root->right=constructTree(preorder,inorder,index+1,ie);

        return curr_root;
    }


    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int is=0;
        int ie=inorder.size()-1;

        return constructTree(preorder,inorder,is,ie);
        
    }
};