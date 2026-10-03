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
    int height(TreeNode*root){
        if(root==nullptr)return 0;
        return max(height(root->left),height(root->right))+1;
    }
    void ans(TreeNode*root,int& maxi){
        if(root==nullptr)return;
        int hl=height(root->left);
        int hr=height(root->right);
        maxi=max(hl+hr,maxi);
        ans(root->left,maxi);
        ans(root->right,maxi);

    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        ans(root,maxi);
        return maxi;
    }
};