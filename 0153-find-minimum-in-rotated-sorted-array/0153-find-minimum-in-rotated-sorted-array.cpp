class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int ans=nums[0];
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]>nums[n-1]){
                s=mid+1;
                
            }
            else{
                e=mid-1;
                ans=nums[mid];
            }
        }
        return ans;
    }
};