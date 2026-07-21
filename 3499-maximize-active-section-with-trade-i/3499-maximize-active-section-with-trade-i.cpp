class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.size();
        int ans=0;
        int count=0;
        int prevc=0;
        int maxi=0;
        bool temp=true;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
              
                if(count+prevc>maxi)maxi=count+prevc;
                if(prevc!=0&&count!=0)temp=false;
                prevc=count;
                count=0;
                while(s[i]=='1'){
                    i++;
                    ans++;
                }
                i--;
            }
            else{
                count++;
            }
        }
        if(count+prevc>maxi)maxi=count+prevc;
        if(prevc!=0&&count!=0)temp=false;
        if(temp)return ans;
        ans+=maxi;
        return ans;
    }
};