class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int count=0;
            unordered_map<int,int>m;
            for(int j=i;j<n;j++){
                if(!m.count(nums[j]))count++;
                m[nums[j]]=1;
                ans+=count*count;
            }
            
        }
        return ans;
    }
};