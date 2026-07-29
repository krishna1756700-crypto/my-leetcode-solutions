class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        vector<int>a(26);
        for(int i=0;i<=(n-2)/2;i++){
            a[(int)s[i]-97]++;
        }
        int x=0;
        for(int i=0;i<26;i++){
            for(int j=0;j<a[i]&&x<n;j++){
                s[x++]=(char)(i+97);
            }
        }
        if(n&1){
            s[x++]=s[(n-1)/2];
        }
        for(int i=25;i>=0;i--){
            for(int j=0;j<a[i]&&x<n;j++){
                s[x++]=(char)(i+97);
            }
        }
        return s;
        
    }
};