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
        int hl=height(root->left);
        int hr=height(root->right);
        return 1+max(hl,hr);
    }

    void print(TreeNode*root,int n,vector<int>&ans){
        if(root==nullptr)return;
        if(n==1){
            ans.push_back(root->val);
            return;
        }
        print(root->left,n-1,ans);
        print(root->right,n-1,ans);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int h=height(root);
        vector<vector<int>>anss;
        for(int i=1;i<=h;i++){
            vector<int>ans;
            print(root,i,ans);
            anss.push_back(ans);
        }
        return anss;
    }
};