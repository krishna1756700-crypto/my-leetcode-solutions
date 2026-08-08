class Solution {
public:

    void anss(vector<vector<int>>&ans,int in,vector<int>&candidates,int target,vector<int>&curr){
        int n=candidates.size();
        if(target==0){
            ans.push_back(curr);
            return;
        }
        if(in>=n||target<0)return;
        if(candidates[in]>target)return;
        else{
            curr.push_back(candidates[in]);
            anss(ans,in+1,candidates,target-candidates[in],curr);
            curr.pop_back();
        }
        int pp=candidates[in];
        while(in<n&&candidates[in]==pp){
            in++;
        }
        anss(ans,in,candidates,target,curr);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>curr;
        anss(ans,0,candidates,target,curr);
        return ans;
    }
};