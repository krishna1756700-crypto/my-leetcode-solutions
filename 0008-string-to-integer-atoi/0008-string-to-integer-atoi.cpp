class Solution {
public:
int x=0;
bool temp=true;
int count=0;
long long ans=0;
int sign=0;
    int myAtoi(string s) {
        int n=s.size();
        if(x>=n){
            if((!sign)&&ans>2147483647)return 2147483647;
            if(sign&&ans>2147483648)return -2147483648;
            if(sign==1)return -ans;
            
            return ans;
        }
        if(temp&&s[x]==' '){
            x++;
            return myAtoi(s);
        }
        if(temp&&(s[x]=='+'||s[x]=='-')){
            if(s[x]=='-')sign=1;
            x++;
            temp=false;
            return myAtoi(s);
        }
        else if(s[x]!=' '){
            temp=false;
        }
        int z=s[x]-'0';
        if(z<0||z>9){
            if((!sign)&&ans>2147483647)return 2147483647;
            if(sign&&ans>2147483648)return -2147483648;
            if(sign==1)return -ans;
            return ans;
        }
        ans*=10;
        ans+=z;
        x++;
        if((!sign)&&ans>2147483647)return 2147483647;
            if(sign&&ans>2147483648)return -2147483648;
        return myAtoi(s);

        
    }
};