class Solution {
public:
    int minInsertions(string s) {
        int n=s.size();
        stack<char>st;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')st.push(s[i]);
            else{
                
                if(st.empty())count++;
                else{
                    st.pop();
                }
                if(i==n-1)count++;
                else if(s[i+1]=='('){
                    count++;
                    st.push('(');
                }
                i++;
            }
        }
        count+=2*st.size();
        return count;
    }
};