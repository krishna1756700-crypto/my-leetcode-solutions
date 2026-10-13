class Solution {
public:
    int maxSum(vector<int >& nums, int k) {
        vector<long long>a(30);
        long long n=nums.size();
        for(long long i=0;i<n;i++){
            long long p=1;
            for(long long j=0;j<30;j++){
                if(p&nums[i])a[j]++;
                p=p<<1;
            }
            nums[i]=0;
        }
        long long ans=0;
        for(long long i=0;i<k;i++){
            long long p=1;
            for(long long j=0;j<30;j++){
                if(a[j]>0){
                nums[i]+=p;
                a[j]--;
                }
                p=p<<1;
            }
              ans=(ans+(1LL*nums[i]*nums[i])%(1000000007))%(1000000007);
        }
        return ans;
      
    }
};