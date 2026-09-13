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
    void preorder(vector<int>&b,TreeNode*root){
    if(root==nullptr)return;
    b.push_back(root->val);
    preorder(b,root->left);
    
    preorder(b,root->right);
}
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        preorder(ans,root);
        return ans;
    }
};