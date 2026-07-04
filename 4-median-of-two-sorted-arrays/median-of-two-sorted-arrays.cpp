class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
        if((m+n)&1){
            int x=1;
            double ans;
            while(1==1){
                if(i>=n){
                    ans=nums2[j];
                    j++;
                     if(x==(m+n+1)/2)return ans;
                    x++;
                    continue;
                }
                if(j>=m){
                    ans=nums1[i];
                    i++;
                    if(x==(m+n+1)/2)return ans;
                    x++;
                    continue;
                }
                if(nums1[i]<nums2[j]){
                    ans=nums1[i];
                    i++;
                  
                }
                else{
                    ans=nums2[j];
                    j++;
                    
                }
                if(x==(m+n+1)/2)return ans;
                x++;
            }
        }




        else{
            double prev=0;
            double ans=0;
            int x=1;
             while(1==1){
                if(i>=n){
                    prev=ans;
                    ans=nums2[j];
                    j++;
                    if(x==(m+n)/2+1)return (ans+prev)/2.0;
                    x++;
                    continue;
                }
                if(j>=m){
                    prev=ans;
                    ans=nums1[i];
                    i++;
                    if(x==(m+n)/2+1)return (ans+prev)/2.0;
                    x++;
                    continue;
                }
                if(nums1[i]<nums2[j]){
                    prev=ans;
                    ans=nums1[i];
                    i++;
                  
                }
                else{
                    prev=ans;
                    ans=nums2[j];
                    j++;
                    
                }
                if(x==(m+n)/2+1)return (ans+prev)/2.0;
                x++;
            }

        }











    double ans=0;
    return ans;
    }
};