class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++){
            int sum=0;
            for(int n:nums){
                if((n>>i)&1)sum++;
            }

            if(i==31&&sum%3!=0)ans|=1<<31;
            else if(sum%3!=0)ans+=1<<i;




        }
        return ans;
    }
};