class Solution {
public:
    vector<int> maxDepthAfterSplit(string s) {
        int n=s.size();
        vector<int>ans;
        ans.push_back(0);
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                if(ans.back()==0)ans.push_back(1);
                else{
                    ans.push_back(0);
                }
            }
            else{
                ans.push_back(ans.back());
            }
        }
        return ans;
    }
};