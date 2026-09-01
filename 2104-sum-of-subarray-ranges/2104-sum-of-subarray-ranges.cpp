class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        vector<int>rge(n);
        vector<int>lge(n);
        vector<int>rse(n);
        vector<int>lse(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                rge[i]=n;
                st.push(i);
            }
            else{
                while(!st.empty()&&nums[st.top()]<=nums[i]){
                    st.pop();
                }
                if(st.empty()){
                    rge[i]=n;
                    st.push(i);
                }
                else{
                    rge[i]=st.top();
                    st.push(i);
                }
            }
        }

        stack<int>st2;
        for(int i=0;i<n;i++){
            if(st2.empty()){
                lge[i]=-1;
                st2.push(i);
            }
            else{
                while(!st2.empty()&&nums[st2.top()]<nums[i]){
                    st2.pop();
                }
                if(st2.empty()){
                    lge[i]=-1;
                    st2.push(i);
                }
                else{
                    lge[i]=st2.top();
                    st2.push(i);
                }
            }
        }

        stack<int>st3;
        for(int i=n-1;i>=0;i--){
            if(st3.empty()){
                rse[i]=n;
                st3.push(i);
            }
            else{
                while(!st3.empty()&&nums[st3.top()]>=nums[i]){
                    st3.pop();
                }
                if(st3.empty()){
                    rse[i]=n;
                    st3.push(i);
                }
                else{
                    rse[i]=st3.top();
                    st3.push(i);
                }
            }
        }

         stack<int>st4;
        for(int i=0;i<n;i++){
            if(st4.empty()){
                lse[i]=-1;
                st4.push(i);
            }
            else{
                while(!st4.empty()&&nums[st4.top()]>nums[i]){
                    st4.pop();
                }
                if(st4.empty()){
                    lse[i]=-1;
                    st4.push(i);
                }
                else{
                    lse[i]=st4.top();
                    st4.push(i);
                }
            }
        }

        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=1LL*((rge[i]-i)*(i-lge[i])-(rse[i]-i)*(i-lse[i]))*nums[i];
        }
        return ans;












    }
};