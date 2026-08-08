class Solution {
public:
    void anss(vector<vector<int>>&ans,int in,vector<int>&nums,vector<int>&curr){
        int n=nums.size();
        if(in>=n)return;
        curr.push_back(nums[in]);
        ans.push_back(curr);
        anss(ans,in+1,nums,curr);
        curr.pop_back();
        anss(ans,in+1,nums,curr);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>ans;
       vector<int>curr;
       anss(ans,0,nums,curr);
       ans.push_back({});
       return ans;

    }
};