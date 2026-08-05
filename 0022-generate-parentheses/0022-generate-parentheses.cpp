class Solution {
public:
     
     void gen(int x,int y,vector<string>&a,string curr){
        if(x==0&&y==0){
            a.push_back(curr);
            return ;
        }
        if(x!=0){
            gen(x-1,y,a,curr+"(");
        }
        if(y>x){
            gen(x,y-1,a,curr+")");
        }
     }
    vector<string> generateParenthesis(int n) {
        vector<string>a;
         gen(n,n,a,"");
        return a;
    }
};