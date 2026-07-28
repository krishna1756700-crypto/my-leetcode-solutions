class Solution {
public:
    bool check(vector<int>&a,int t,int mid){
        int n=a.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=a[i]/mid;
            if(a[i]%mid!=0){
                ans++;
            }
            if(ans>t)return false;
        }
        return true;
    }
    int smallestDivisor(vector<int>& a, int t) {
        int n=a.size();
        int max=a[0];
        for(int i=0;i<n;i++){
            if(a[i]>max)max=a[i];
        }
        int s=1;
        int e=max;
        int ans=max;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(check(a,t,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};