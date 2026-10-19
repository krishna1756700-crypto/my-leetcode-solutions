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
    void anss(map<int,map<int,multiset<int>>>&ans,TreeNode*root,int col,int row){
        if(root==nullptr)return;
        ans[col][row].insert(root->val);
        anss(ans,root->left,col-1,row+1);
        anss(ans,root->right,col+1,row+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>ans;
        anss(ans,root,0,0);
        vector<vector<int>>v;
        for(auto p:ans){
            vector<int>x;
            for(auto c:p.second){
                for(auto xx:c.second){
                    x.push_back(xx);
                }
            }
            v.push_back(x);
        }
        return v;
    }
};