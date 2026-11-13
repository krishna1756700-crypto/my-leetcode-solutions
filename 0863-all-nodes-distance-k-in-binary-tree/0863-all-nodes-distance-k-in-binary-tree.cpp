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
    void an(vector<int>&ans,TreeNode*root,unordered_map<TreeNode*,TreeNode*>&m,int k,unordered_map<TreeNode*,bool>&visited){
        if(root==nullptr)return ;
        visited[root]=true;
        if(k==0){
            ans.push_back(root->val);return;}
            if(k<0)return;
            if(visited.count(root->left)==0)
            an(ans,root->left,m,k-1,visited);
             if(visited.count(root->right)==0)
            an(ans,root->right,m,k-1,visited);
            if(m.count(root)&&visited.count(m[root])==0){
                an(ans,m[root],m,k-1,visited);
            }

    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>m;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode*temp=q.front();
                q.pop();
                if(temp->left!=nullptr){
                    q.push(temp->left);
                    m[temp->left]=temp;
                }
                if(temp->right!=nullptr){
                    q.push(temp->right);
                    m[temp->right]=temp;
                }
            }

        }
        unordered_map<TreeNode*,bool>visited;
        vector<int>ans;
        an(ans,target,m,k,visited);
        return ans;








    }
};