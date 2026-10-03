class Solution {
public:
    
    int numDecodings(string s) {
        if(s[0]=='0')return 0;
        int n=s.size();
        vector<int>dp(n);
        dp[0]=1;
        int i=1;
        while(i<n){
            if(s[i]!='0')
            dp[i]+=dp[i-1];
            if(i>=1&&(s[i-1]-'0')*10+s[i]-'0'>=10&&(s[i-1]-'0')*10+s[i]-'0'<=26){
                if(i==1)dp[i]++;
                else{
                dp[i]+=dp[i-2];
               
            }
        }
         i++;
        }
        return dp[n-1];

    }
};