class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.size();
        int count=0;
        int prevc=0;
        int maxi=0;
        int ans=0;
        
        for(int i=0;i<n;){
            if(s[i]=='1'){
                if(prevc!=0&&count+prevc>maxi)maxi=count+prevc;
               
                prevc=count;
                count=0;
                while(i<n&&s[i]=='1'){
                    ans++;
                    i++;
                }
            }
            else{
                while(i<n&&s[i]=='0'){
                    count++;
                    i++;
                }
            }
        }
        if(prevc!=0&&count!=0&&count+prevc>maxi)maxi=count+prevc;
        
      
        return ans+maxi;

    }
};