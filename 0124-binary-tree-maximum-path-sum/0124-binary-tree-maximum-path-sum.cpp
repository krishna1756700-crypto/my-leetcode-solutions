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
        int suml=ans(root->left,maxi);
        int sumr=ans(root->right,maxi);
        if(suml<0)suml=0;
        if(sumr<0)sumr=0;
        maxi=max(suml+sumr+root->val,maxi);
        return max(suml,sumr)+root->val;

    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        ans(root,maxi);
        
        return maxi;
    }
};