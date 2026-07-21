class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int ans;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(mid&1){
                if(nums[mid]==nums[mid-1]){
                    s=mid+1;
                }
                else if(nums[mid]==nums[mid+1]){
                    e=mid-1;
                }
                else{
                    return nums[mid];

                }
            }
            else{
                if(mid>0&&nums[mid]==nums[mid-1]){
                    e=mid-1;
                }
                else if(mid<n-1&&nums[mid]==nums[mid+1]){
                    s=mid+1;
                }
                else{
                    return nums[mid];
                }
            }
        }
        return -1;
        
    }
};