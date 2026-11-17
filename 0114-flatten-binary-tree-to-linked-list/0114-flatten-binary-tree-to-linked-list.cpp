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
    void ans(TreeNode*root,TreeNode* &prev){
        if(root==nullptr)return ;
        TreeNode*right=root->right;TreeNode*left=root->left;
        if(prev!=nullptr){
        prev->right=root;prev->left=nullptr;}
        prev=root;
        
        ans(left,prev);
        ans(right,prev);
    }
    void flatten(TreeNode* root) {
        TreeNode*prev=nullptr;
        ans(root,prev);

    }
};