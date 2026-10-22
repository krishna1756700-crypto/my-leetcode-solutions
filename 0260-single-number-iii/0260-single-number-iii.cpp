class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long axorb=0;
        for(int num:nums){
            axorb^=num;
        }
      
        long long p=axorb&(-axorb);
       
        int x=0;
        int y=0;
        for(int num:nums){
            if((num&p)!=0)x^=num;
            else{
                y^=num;
            }
        }
        return {x,y};
    }
};