class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;

        vector<pair<int,int>>a(n);
        for(int i=0;i<n;i++){
            string d=to_string(nums[i]);
            int x=0;
            for(char p:d){
                x+=p-'0';
            }
            a[i].first=nums[i];
            a[i].second=x;
            m[nums[i]]=i;
        }

        

       sort(a.begin(),a.end(),[](pair<int,int>a,pair<int,int>b){
        if(b.second==a.second)return a.first<b.first;
        return a.second<b.second;
       });

        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=a[i].first){
                c++;
                int in=m[a[i].first];
                m[nums[i]]=in;
                m[a[i].first]=i;
                swap(nums[in],nums[i]);
                
            }
         
        }
        return c;
        





    }
};