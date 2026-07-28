class Solution {
public:
bool check(vector<int>&a,int m,int k,int mid){
    int n=a.size();
    int anss=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]-mid<=0){
            count++;
        }
        else{
            anss+=count/k;
            count=0;
        }
    }
    anss+=count/k;
    if(anss>=m)return true;
    return false;
}
    int minDays(vector<int>& a, int m, int k) {
        int n=a.size();
        if(m>n/k)return -1;
        int max=a[0];
        int min=a[0];
        for(int i=0;i<n;i++){
            if(a[i]>max){
                max=a[i];
            }
            if(a[i]<min){
                min=a[i];
            }
        }
        int s=min;
        int e=max;
        int ans=max;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(check(a,m,k,mid)){
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