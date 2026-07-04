class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=shifts.size();
        int sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=shifts[i];
            sum%=26;
            int z=s[i];
            z+=sum;
            if(z>122){
                z=z-26;
            }
            s[i]=(char)z;
            
        }
        return s;
    }
};