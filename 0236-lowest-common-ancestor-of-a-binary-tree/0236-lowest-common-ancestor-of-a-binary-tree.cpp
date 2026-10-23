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
    TreeNode* ans(TreeNode*root,TreeNode*target,vector<TreeNode*>&an){
        if(root==nullptr)return root;
        if(root==target){
            an.push_back(root);
            return root;
        }
        if(ans(root->left,target,an)!=nullptr){
            an.push_back(root);
            return target;
        }
        if(ans(root->right,target,an)!=nullptr){
            an.push_back(root);
            return target;
        }
        return nullptr;
        

        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>a;
        vector<TreeNode*>b;
        TreeNode* t=ans(root,p,a);
        TreeNode* t2=ans(root,q,b);
        int i=a.size()-1;
        int j=b.size()-1;
        while(i>=0&&j>=0&&a[i]==b[j]){
            i--;j--;
        }
        return a[i+1];
    }
};