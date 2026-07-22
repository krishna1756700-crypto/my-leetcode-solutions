class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int prev=0;
        int curr=0;
        int maxi=0;
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;){
            if(s[i]=='1'){
                while(i<n&&s[i]=='1'){
                    ans++;
                    i++;
                }
                if(prev&&curr&&prev+curr>maxi)maxi=prev+curr;
                prev=curr;
                curr=0;
            }
            else{
                while(i<n&&s[i]=='0'){
                    curr++;
                    i++;
                }
            }
        }
        if(prev&&curr&&prev+curr>maxi)maxi=prev+curr;
        return ans+maxi;

    }
};