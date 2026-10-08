class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        int count=1;
        string ans;
        for(int i=1;i<n-1;i++){
            if(s[i]=='(')count++;
            else{
                count--;
            }
            if(count!=0)ans+=s[i];
            else{
                i++;
                count=1;
            }
        }
        return ans;
    }
};