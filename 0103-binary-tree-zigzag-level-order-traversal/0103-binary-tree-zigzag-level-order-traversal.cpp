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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==nullptr)return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        bool flag=false;
        while(!q.empty()){
            int n=q.size();
            vector<int>v;
            for(int i=0;i<n;i++){
                TreeNode*temp=q.front();
                q.pop();
                if(temp->left!=nullptr)q.push(temp->left);
                if(temp->right!=nullptr)q.push(temp->right);
                v.push_back(temp->val);
            }
            if(flag){
                reverse(v.begin(),v.end());
            }
            flag=!flag;
            ans.push_back(v);
        }
        return ans;
    }
};