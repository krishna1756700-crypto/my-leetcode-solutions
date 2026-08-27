class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n2=nums2.size();
        int n1=nums1.size();
        unordered_map<int,int>m;
        vector<int>ans;
        stack<int>st;
        for(int i=n2-1;i>=0;i--){
            if(st.empty()){
                m[nums2[i]]=-1;
                st.push(nums2[i]);
                continue;
            }
             if(!st.empty()&&nums2[i]<st.top()){
                m[nums2[i]]=st.top();
                st.push(nums2[i]);
                continue;
            }
            if(!st.empty()&&nums2[i]>st.top()){
                while(!st.empty()&&nums2[i]>st.top()){
                    st.pop();
                }
                if(st.empty()){
                    m[nums2[i]]=-1;
                    st.push(nums2[i]);
                }
                else{
                    m[nums2[i]]=st.top();
                    st.push(nums2[i]);
                }
            }
        }
        for(int i=0;i<n1;i++){
            ans.push_back(m[nums1[i]]);
        }
        return ans;
    }
};