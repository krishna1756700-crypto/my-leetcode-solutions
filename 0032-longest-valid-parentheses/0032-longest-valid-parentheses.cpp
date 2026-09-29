class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size();
        int o=0;
        int c=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')o++;
            else{
                c++;
            }
            if(o==c)ans=max(ans,2*c);
            if(c>o){
                o=0;
                c=0;
            }
        }
        o=0;
        c=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='(')o++;
            else{
                c++;
            }
            if(o==c)ans=max(ans,2*c);
            if(c<o){
                o=0;
                c=0;
            }
        }
        return ans;
    }
};