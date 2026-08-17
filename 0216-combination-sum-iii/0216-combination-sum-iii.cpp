class Solution {
public:
  void  get(vector<vector<int>>&a,int k,vector<int>&curr,int n,int x){
        if(k==0||x>9||n<0){
            if(n==0&&k==0)a.push_back(curr);
            return;
        }
        curr.push_back(x);
        get(a,k-1,curr,n-x,x+1);
        curr.pop_back();
        get(a,k,curr,n,x+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>a;
        vector<int>curr;
        get(a,k,curr,n,1);
        return a;
        
    }
};