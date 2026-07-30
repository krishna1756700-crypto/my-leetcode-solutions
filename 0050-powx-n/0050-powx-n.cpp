class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long long z=n;
        if(z<0){
            x=1/x;
            z=-z;
        }
        
        while(z>0){
            if(z%2!=0)ans*=x;
            x*=x;
            z>>=1;
        }
        return ans;
    }
};