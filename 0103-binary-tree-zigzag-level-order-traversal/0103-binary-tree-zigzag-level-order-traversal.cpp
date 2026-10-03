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
        return max(height(root->right),height(root->left))+1;
    }
    void level(vector<int>&a,int k,TreeNode*root){
        if(root==nullptr)return;
        if(k==1)a.push_back(root->val);
        level(a,k-1,root->left);
        level(a,k-1,root->right);
    }
    void level2(vector<int>&a,int k,TreeNode*root){
        if(root==nullptr)return;
        if(k==1)a.push_back(root->val);
        level2(a,k-1,root->right);
        level2(a,k-1,root->left);
        
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int h=height(root);
        vector<vector<int>>ans;
        for(int i=1;i<=h;i++){
            vector<int>a;
            if(i&1)
            level(a,i,root);
            else{
                level2(a,i,root);
            }
            ans.push_back(a);
        }
        return ans;
    }
};