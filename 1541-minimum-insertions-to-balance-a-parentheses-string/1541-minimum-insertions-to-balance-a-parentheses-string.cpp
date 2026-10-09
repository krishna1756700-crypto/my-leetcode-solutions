class Solution {
public:
    int minInsertions(string s) {
        int n=s.size();
        int open=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')open++;
            else{
                
                if(open==0)count++;
                else{
                    open--;
                }
                if(i==n-1)count++;
                else if(s[i+1]=='('){
                    count++;
                    open++;
                }
                i++;
            }
        }
        count+=2*open;
        return count;
    }
};