class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        bool temp=true;
        int p=INT_MIN;
        int q=INT_MAX;
        bool temp2=false;
        bool temp3=false;
        for(int i=0;i<n;i++){
            if(i!=0&&s[i]<s[i-1])temp=false;
            if(s[i]-'0'>=p){
                 if(s[i]-'0'==p)temp2=true;
                else{temp2=false;}
                p=s[i]-'0';
               
            }
            if(s[i]-'0'<=q){
                 if(s[i]-'0'==q)temp3=true;
                else{temp3=false;}
                q=s[i]-'0';
               
            }
            
            
            
        }
        if(temp||n==1)return 0;
        if(n==2)return -1;
        if(s[0]-'0'==q||s[n-1]-'0'==p)return 1;
        if(temp3||temp2||s[0]-'0'!=p||s[n-1]-'0'!=q)return 2;
        return 3;
    }
};