class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]==')')count--;
            else{
                count++;
            }
            if(count<0){
                count=0;
                ans++;
            }
        }
        if(count>0)ans+=count;
        return ans;

    }
};