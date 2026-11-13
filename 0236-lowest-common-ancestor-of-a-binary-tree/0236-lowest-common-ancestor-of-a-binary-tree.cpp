/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    TreeNode* ans(TreeNode*root,TreeNode*p,TreeNode*q){
        if(root==nullptr)return nullptr;
       if(root==p||root==q)return root;
        TreeNode*left=ans(root->left,p,q);
        TreeNode*right=ans(root->right,p,q);
        if(left!=nullptr&&right!=nullptr)return root;
        if(left!=nullptr)return left;
        if(right!=nullptr)return right;
        return nullptr;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode*an=nullptr;
        TreeNode*temp=ans(root,p,q);
        return temp;
    }
};