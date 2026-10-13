class Solution {
public:
    static bool comp(int a,int b){
        return abs(a)<abs(b);
    }
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
       
        sort(nums.begin(),nums.end(),comp);
        int i=0;
        int j=n-1;
        long long ans=0;
        while(j>i){
            ans+=nums[j]*nums[j];
            ans-=nums[i]*nums[i];
            i++;
            j--;
        }
        if(i==j)ans+=nums[j]*nums[j];
        return ans;
    }
};