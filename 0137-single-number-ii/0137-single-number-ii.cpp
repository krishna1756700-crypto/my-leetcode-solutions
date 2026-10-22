class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>v(32);
        int n=nums.size();
        for(int i=0;i<n;i++){
            int x=nums[i];
            for(int j=0;j<32&&x!=0;j++){
                if(x&1)v[j]++;
                x=x>>1;
            }
        }
        int ans=0;
        for(int i=0;i<31;i++){
            if(v[i]%3!=0){
               
                ans+=1<<i;
            }
        }
        if(v[31]%3!=0)ans|=1<<31;
        return ans;
    }
};