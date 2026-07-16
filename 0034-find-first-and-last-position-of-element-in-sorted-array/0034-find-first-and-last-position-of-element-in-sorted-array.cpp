class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int f=-1;
        int l=-1;
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                s=mid+1;
                l=mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        if(l==-1)return{-1,-1};
        s=0;
        e=l;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                e=mid-1;
                f=mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return {f,l};
    }
};