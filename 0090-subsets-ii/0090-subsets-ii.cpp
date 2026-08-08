class Solution {
public:
    void anss(vector<vector<int>>&ans,int in,vector<int>&nums,vector<int>&curr){
        int n=nums.size();
        if(in>=n)return ;
        curr.push_back(nums[in]);
        ans.push_back(curr);
        anss(ans,in+1,nums,curr);
        curr.pop_back();
        int pp=nums[in];
        while(in<n&&nums[in]==pp){
            in++;
        }
        anss(ans,in,nums,curr);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>curr;
        anss(ans,0,nums,curr);
        ans.push_back({});
        return ans;
    }
};