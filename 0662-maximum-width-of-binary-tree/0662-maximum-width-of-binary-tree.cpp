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
    int widthOfBinaryTree(TreeNode* root) {

        queue<pair<TreeNode*,long long>>q;
        q.push({root,1});
        long long ans=0;
        long long level=0;
        while(q.size()!=0){
            
            long long n=q.size();
            long long n1=q.front().second;long long n2=q.back().second;
            
            if(ans<n2-n1+1)ans=n2-n1+1;
            if(-q.front().second+q.back().second>ans)ans=-q.front().second+q.back().second;
            for(long long i=0;i<n;i++){
                pair<TreeNode*,long long>temp=q.front();
                q.pop();
               
                if(temp.first->left!=nullptr)q.push({temp.first->left,2*(temp.second-n1)});
                if(temp.first->right!=nullptr)q.push({temp.first->right,2*(temp.second-n1)+1});
            }
            level++;
        }
        return ans;
    }
};