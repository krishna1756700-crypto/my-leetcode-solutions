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

    void ans(vector<string>&an,TreeNode*root,string s){
        if(root==nullptr)return ;
        if(s.size()==0)s+=to_string(root->val);
        else{
            s+="->"+to_string(root->val);
        }
        if(root->left==nullptr&&root->right==nullptr){
            an.push_back(s);
            return;
        }
        if(root->left!=nullptr)ans(an,root->left,s);
        if(root->right!=nullptr)ans(an,root->right,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>an;
        ans(an,root,"");
        return an;
    }
};