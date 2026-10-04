class Solution {
public:
    bool checkValidString(string s) {
        
        int n=s.size();
        stack<char>st;
        int p=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('||s[i]=='*'){
                st.push(s[i]);
                if(s[i]=='(')p++;
            }
            else{
                if(st.empty())return false;
                int count=0;
                while(!st.empty()&&st.top()=='*'){
                    count++;
                    st.pop();
                }
                if(st.empty())count--;
                else{
                    st.pop();
                    p--;
                }
                for(int j=0;j<count;j++){
                    st.push('*');
                }
            }
        }
        if(p>0){
            int c=0;
            while(p>0){
                if(st.top()=='*'){
                    c++;
                    st.pop();
                }
                else{
                    if(c<=0)return false;
                    c--;
                    p--;
                    st.pop();
                }
            }
        }
        return true;
    }
};