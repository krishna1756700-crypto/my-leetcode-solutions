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
    void ans(TreeNode*root,int depth,vector<int>&a){
        if(root==nullptr)return;
        if(depth>a.size())a.push_back(root->val);
       if(root->right!=nullptr) ans(root->right,depth+1,a);
        if(root->left!=nullptr) ans(root->left,depth+1,a);
    }
    vector<int> rightSideView(TreeNode* root) {
        if(root==nullptr)return {};
        vector<int>a;
        ans(root,1,a);
        return a;
    }
};