class Solution {
public:
    bool check(vector<int>&piles,int k,int h){
        long long ans=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            ans+=piles[i]/k;
            if(piles[i]%k!=0)ans++;
            if(ans>h)return false;
        }
        return true;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        
        long long ans;
        int max=0;
        for(int i=0;i<n;i++){
            if(piles[i]>max)max=piles[i];
        }
        int s=1;
        int e=max;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(check(piles,mid,h)){
                e=mid-1;
                ans=mid;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};