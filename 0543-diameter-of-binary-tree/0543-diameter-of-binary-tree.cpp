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
    int ans(TreeNode*root,int&maxi){
        if(root==nullptr)return 0;
        int hl=ans(root->left,maxi);
        int hr=ans(root->right,maxi);
        maxi=max(maxi,hl+hr);
        return 1+max(hl,hr);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        int h=ans(root,maxi);
        return maxi;
    }
};