class Solution {
public:
    bool isValid(string s) {
        stack <char>a;
        for(int i=0;i<s.size();i++){
            if((s[i]=='(')||(s[i]=='[')||(s[i]=='{')){
                a.push(s[i]);
            }
            else if(a.size()==0||(s[i]==')'&&a.top()!='(')||(s[i]==']'&&a.top()!='[')||(s[i]=='}'&&a.top()!='{')){
                return false;
            }
            else{
                a.pop();
            }
        }
        if(a.size()==0)
        return true;
        return false;
    }
};