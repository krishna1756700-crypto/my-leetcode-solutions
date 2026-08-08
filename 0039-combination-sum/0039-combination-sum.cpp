class Solution {
public:
    void anss(vector<vector<int>>&ans,int target,vector<int>&candidates,int index,vector<int>curr){
        int n=candidates.size();
        if(target==0){
            ans.push_back(curr);
            return;
        }
        if(index>=n||target<0)return;
        if(target-candidates[index]>=0){
        curr.push_back(candidates[index]);
        anss(ans,target-candidates[index],candidates,index,curr);
        curr.pop_back();
        }
        anss(ans,target,candidates,index+1,curr);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>ans;
        anss(ans,target,candidates,0,{});
        return ans;
    }
};