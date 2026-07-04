class Solution {
public:
    bool search(vector<int>& nums, int target) {
         int n=nums.size();
         int p=nums[n-1];
         if(target==p)return true;
         int x1=0;
         while(x1<n&&nums[x1]==p){
            x1++;
         }
         int x2=n-1;
         while(x2>=0&&nums[x2]==p){
            x2--;
         }
         if(x1==n||x2==-1)return false;

       int s=x1;
       int e=x2;
       int k=-1;
       while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]>nums[x2]){
            k=mid;
            s=mid+1;

        }
        else{
            e=mid-1;
        }
       }
       if(nums[x2]>=target){
        int s=k+1;
        if(k==-1)s=x1;
        int e=x2;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target)return true;
        else if(nums[mid]>target){
            e=mid-1;
        } 
        else{
            s=mid+1;
        }
    }
    return false;
       }
       else{
        int s=x1;
        int e=k;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target)return true;
            else if(nums[mid]>target){
                e=mid-1;

            }
            else{
                s=mid+1;
            }
        }
        return false;
       }
    }
};