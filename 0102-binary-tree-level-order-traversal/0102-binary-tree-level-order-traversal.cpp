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

  
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr)return {};
          vector<vector<int>>anss;
          queue<TreeNode*>q;
        q.push(root);
        while(q.size()!=0){
            int n=q.size();
            vector<int>ans;
            for(int i=1;i<=n;i++){
                if(q.front()->left!=nullptr)q.push(q.front()->left);
                if(q.front()->right!=nullptr)q.push(q.front()->right);
                ans.push_back(q.front()->val);
                q.pop();
            }
            anss.push_back(ans);
        }
        return anss;
    }
};