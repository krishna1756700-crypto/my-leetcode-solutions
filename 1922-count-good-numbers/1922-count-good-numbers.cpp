class Solution {
public:

    long long bin(long long a,long long b){
        long long ans=1;
        while(b>0){
            if(b&1)ans=(ans*a)%(1000000007);
            a=(a%(1000000007)*a%(1000000007))%(1000000007);
            b>>=1;
        }
        return ans;
    }



    int countGoodNumbers(long long n) {
        long long x=(n+1)/2;
        long long y=n/2;
        long long ans=1;
        ans=(ans*bin(5,x))%(1000000007);
        ans=(ans*bin(4,y))%(1000000007);
        return ans;

    }
};