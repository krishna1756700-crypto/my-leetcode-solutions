class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor==1)return dividend;
        if(divisor==-1){
            if(dividend==INT_MIN)return INT_MAX;
            return -dividend;
        }
        if(dividend==divisor)return 1;
        bool temp=false;
        if(dividend>0&&divisor<0||dividend<0&&divisor>0)temp=true;

       long long divid=dividend;
       long long divi=divisor;
        divid=abs(divid);
        divi=abs(divi);

        long long ans=0;
        while(divid>=divi){
            int count=0;
            while(divid>=(long long)divi<<count+1){
                count++;
            }
            divid-=divi<<count;
            ans+=1<<count;
        }
        if(temp)ans=-ans;
        return ans;


    }
};