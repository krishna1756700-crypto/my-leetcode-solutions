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
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==nullptr)return {};
        vector<int>ans;
        stack<pair<TreeNode*,int>>st;
        st.push({root,1});
        while(!st.empty()){
            if(st.top().second==1){
                TreeNode*temp=st.top().first;
                 ans.push_back(st.top().first->val);
                st.pop();
                st.push({temp,2});
                if(temp->left!=nullptr)st.push({temp->left,1});
            }
            else if(st.top().second==2){
                TreeNode*temp=st.top().first;
                st.pop();
                st.push({temp,3});
                if(temp->right!=nullptr)st.push({temp->right,1});
            }
            else{
               
                st.pop();
            }
        }
        return ans;
    }
};