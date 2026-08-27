class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        for(int i=2*n-1;i>=0;i--){
            if(st.empty()){
                st.push(nums[i%n]);
                if(i<n){
                    nums[i]=-1;
                }
            }
            else{
                while(!st.empty()&&st.top()<=nums[i%n]){
                    st.pop();
                }
                if(st.empty()){
                    st.push(nums[i%n]);
                    if(i<n)nums[i]=-1;
                }
                else{
                    int x=st.top();
                    st.push(nums[i%n]);
                    if(i<n)nums[i]=x;
                }
            }
        }
        return nums;
    }
};