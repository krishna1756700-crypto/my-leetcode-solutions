class Solution {
public:
    void gen(int z,long long sum,vector<int>&candidates,vector<int>curr,int target,vector<vector<int>>&ans){
        if(sum>target){
            return ;
        }
        else if(sum==target){
            ans.push_back(curr);
            return;
        }
        int n=candidates.size();
        for(int i=z;i<n;i++){
            if(sum+candidates[i]<=target){
                curr.push_back(candidates[i]);
               gen(i,sum+candidates[i],candidates,curr,target,ans); 
               curr.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>curr={};
        gen(0,0,candidates,curr,target,ans);
        return ans;
    }
};