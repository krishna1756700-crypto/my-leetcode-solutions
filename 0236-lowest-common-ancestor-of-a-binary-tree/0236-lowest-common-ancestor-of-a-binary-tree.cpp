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
    int ans(TreeNode*root,TreeNode*p,TreeNode*q,TreeNode*&an){
        if(root==nullptr)return 0;
        int score=0;
        score+=ans(root->left,p,q,an);
        score+=ans(root->right,p,q,an);
        if(root==p||root==q)score++;
        if(score==2&&an==nullptr){
            an=root;
        }
        return score;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode*an=nullptr;
        int x=ans(root,p,q,an);
        return an;
    }
};