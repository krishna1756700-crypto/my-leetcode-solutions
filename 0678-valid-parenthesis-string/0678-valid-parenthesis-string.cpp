class Solution {
public:
    bool checkValidString(string s) {
        int n=s.size();
        int c1=0;
        int c2=0;
        for(int i=0,j=n-1;i<n;i++,j--){
            if(s[i]=='('||s[i]=='*')c1++;
            else{
                c1--;
            }
             if(c1<0||c2<0)return false;
        }
        for(int j=n-1;j>=0;j--){
            if(s[j]==')'||s[j]=='*')c2++;
            else{
                c2--;
            }
              if(c1<0||c2<0)return false;
        }
      
        return true;
        
    }
};