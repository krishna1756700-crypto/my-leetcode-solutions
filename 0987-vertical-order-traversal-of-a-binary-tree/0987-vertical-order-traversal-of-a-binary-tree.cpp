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
    void anss(vector<tuple<int,int,int>>&ans,TreeNode*root,int col,int row){
        if(root==nullptr)return;
        ans.push_back({col,row,root->val});
        anss(ans,root->left,col-1,row+1);
        anss(ans,root->right,col+1,row+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<tuple<int,int,int>>v;
        anss(v,root,0,0);
        vector<vector<int>>a;
        sort(v.begin(),v.end());
        int prevcol=INT_MIN;
        for(auto [cc,rr,vv]:v){
            if(cc!=prevcol){
                a.push_back({vv});
                prevcol=cc;
            }
            else{
                a.back().push_back(vv);
            }
        }
        return a;
    }
};