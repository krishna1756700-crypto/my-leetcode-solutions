class Solution {
public:
    int maxValidPairSum(vector<int>& a, int k) {
        int n=a.size();
        long long ans=0;
        int maxi=a[n-1];
        for(int i=n-1;i>=k;i--){
            if(maxi<a[i])maxi=a[i];
            if(ans<a[i-k]+maxi)ans=a[i-k]+maxi;
        }
        return ans;
    }
};