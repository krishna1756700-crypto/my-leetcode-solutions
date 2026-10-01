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
    bool isSameTree(TreeNode* p, TreeNode* q) {
    
        queue<pair<TreeNode*,TreeNode*>>pp;
        pp.push({p,q});
        while(!pp.empty()){
            TreeNode*a=pp.front().first;
            TreeNode*b=pp.front().second;
            pp.pop();
            if(a==nullptr&&b==nullptr)continue;
            if(a==nullptr||b==nullptr)return false;
            if(a->val!=b->val)return false;
            pp.push({a->left,b->left});
            pp.push({a->right,b->right});
        }
        return true;


    }
};