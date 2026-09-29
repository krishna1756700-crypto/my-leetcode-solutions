class Solution {
public:
    string removeKdigits(string s, int k) {
         int n=s.size();
        if(n==k)return "0";
       
        stack<char>st;
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(s[i]>=st.top()){
                st.push(s[i]);
            }
            else{
                while(k>0&&st.empty()==false&&st.top()>s[i]){
                    st.pop();
                    k--;
                }
                st.push(s[i]);
            }
        }
        if(k>0){
            while(k>0&&st.empty()!=true){
                st.pop();
                k--;
            }
        }
        string ans;
        while(st.empty()==false){
            ans+=st.top();
            st.pop();
        }
        int n2=ans.size();
        for(int i=n2-1;i>=0;i--){
            if(ans[i]!='0'){
                break;
            }
            else{
                ans.erase(i,1);
            }
        }
        if(ans.size()==0)return "0";
        reverse(ans.begin(),ans.end());
        return ans;

    }
};