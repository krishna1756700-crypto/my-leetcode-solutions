class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n=a.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(st.empty()||a[i]>0||(a[i]<0&&st.top()<0)){
                st.push(a[i]);
            }
            else{
                while(!st.empty()&&st.top()<abs(a[i])&&st.top()>0){
                    st.pop();
                }
                
                if(st.empty()||st.top()<0)st.push(a[i]);
                else if(st.top()==-a[i])st.pop();
                
                
            }
        }
        if(st.empty())return {};
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        int n2=ans.size();
        for(int i=0,j=n2-1;i<j;i++,j--){
            swap(ans[i],ans[j]);
        }
        return ans;
    }
};