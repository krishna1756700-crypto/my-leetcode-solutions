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
    void an(TreeNode*root,int k,vector<int>&ans,TreeNode*target){
        if(root==nullptr)return;
        if(k==0){
            ans.push_back(root->val);return ;
        }
        if(k<0)return;
        if(root->left!=target)an(root->left,k-1,ans,target);
        if(root->right!=target)an(root->right,k-1,ans,target);
    }
    TreeNode*path(TreeNode*root,TreeNode*target,vector<TreeNode*>&pathh){
        if(root==nullptr)return nullptr;
        if(root==target){
            pathh.push_back(root);return root;
        }
        if(path(root->left,target,pathh)!=nullptr){
            pathh.push_back(root);
            return root;
        }
        if(path(root->right,target,pathh)!=nullptr){
            pathh.push_back(root);
            return root;
        }
        return nullptr;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>ans;
        vector<TreeNode*>pathh;
        TreeNode*temp=path(root,target,pathh);
        int n=pathh.size();
        an(target,k,ans,target);
        for(int i=1;i<n;i++){
            an(pathh[i],k-i,ans,pathh[i-1]);
        }
        return ans;



    }
};